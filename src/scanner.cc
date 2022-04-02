#include <tree_sitter/parser.h>

#include <stdio.h>

namespace {

enum TokenType {
  OPEN_VALUE,
  OPEN_BUILDER,
  OPEN_BLOCK,
  OPEN_LINE,
  TEXT,
};

struct Scanner {
  Scanner() {}

  unsigned serialize(char *buffer) {
      // fprintf(stderr, "serialize\n");
      return 0;
  }

  void deserialize(const char *buffer, unsigned length) {
      // fprintf(stderr, "deserialize\n");
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
      // fprintf(stderr, "scan\n");
      unsigned int count = 1;
      // fprintf(stderr, "text %d\n", valid_symbols[TEXT]);
      // fprintf(stderr, "value %d\n", valid_symbols[OPEN_VALUE]);
      // fprintf(stderr, "builder %d\n", valid_symbols[OPEN_BUILDER]);
      // fprintf(stderr, "block %d\n", valid_symbols[OPEN_BLOCK]);
      // fprintf(stderr, "line %d\n", valid_symbols[OPEN_LINE]);
      if (!lexer->lookahead) {
          return false;
      }

      if (valid_symbols[TEXT] || valid_symbols[OPEN_VALUE] || valid_symbols[OPEN_BUILDER] || valid_symbols[OPEN_BLOCK] || valid_symbols[OPEN_LINE]) {

          while(lexer->lookahead) {
              // fprintf(stderr, "%c\n", lexer->lookahead);
              if (lexer->lookahead == '{') {
                  lexer->mark_end(lexer);

                  lexer->advance(lexer, false);
                  // fprintf(stderr, "%c\n", lexer->lookahead);
                  ++count;

                  if (lexer->lookahead == '{') {
                      if (count == 2) {
                          lexer->advance(lexer, false);
                          lexer->mark_end(lexer);
                          lexer->result_symbol = OPEN_VALUE;
                      } else {
                          lexer->result_symbol = TEXT;
                      }
                      // fprintf(stderr, "return {\n");
                      return true;
                  }
                  else if (lexer->lookahead == '[') {
                      if (count == 2) {
                          lexer->advance(lexer, false);
                          lexer->mark_end(lexer);
                          lexer->result_symbol = OPEN_BUILDER;
                      } else {
                          lexer->result_symbol = TEXT;
                      }
                      // fprintf(stderr, "return [\n");
                      return true;
                  }
                  else if (lexer->lookahead == '%') {
                      if (count == 2) {
                          lexer->advance(lexer, false);
                          lexer->mark_end(lexer);
                          lexer->result_symbol = OPEN_BLOCK;
                      } else {
                          lexer->result_symbol = TEXT;
                      }
                      // fprintf(stderr, "return %\n");
                      return true;
                  }
                  else if (valid_symbols[OPEN_LINE] && lexer->lookahead == '>') {
                      if (count == 2) {
                          lexer->advance(lexer, false);
                          lexer->mark_end(lexer);
                          // fprintf(stderr, "set open line\n");
                          lexer->result_symbol = OPEN_LINE;
                      } else {
                          lexer->result_symbol = TEXT;
                      }
                      // fprintf(stderr, "return >\n");
                      return true;
                  }
              } else {
                  lexer->advance(lexer, false);
                  ++count;
              }
          }

          lexer->mark_end(lexer);
          lexer->result_symbol = TEXT;
          // fprintf(stderr, "return end\n");
          return true;
      }

      // fprintf(stderr, "return false\n");
      return false;
  }
};

}

extern "C" {

void *tree_sitter_greentea_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_greentea_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_greentea_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_greentea_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_greentea_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
