#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACE_GT = 2,
  anon_sym_import = 3,
  anon_sym_SLASH = 4,
  anon_sym_with = 5,
  anon_sym_as = 6,
  anon_sym_LBRACE_PERCENT = 7,
  anon_sym_if = 8,
  anon_sym_PERCENT_RBRACE = 9,
  anon_sym_endif = 10,
  anon_sym_LBRACE_LBRACE = 11,
  anon_sym_RBRACE_RBRACE = 12,
  anon_sym_LBRACE_LBRACK = 13,
  anon_sym_RBRACK_RBRACE = 14,
  sym_generalText = 15,
  sym_variable = 16,
  sym_type = 17,
  sym_source_file = 18,
  sym__headers = 19,
  sym__header = 20,
  sym_import_statement = 21,
  sym_module = 22,
  sym_with_statement = 23,
  sym_body = 24,
  sym_content = 25,
  sym_if_statement = 26,
  sym__if_block = 27,
  sym__if_end_block = 28,
  sym_value = 29,
  sym_builder = 30,
  aux_sym__headers_repeat1 = 31,
  aux_sym_module_repeat1 = 32,
  aux_sym_content_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE_GT] = "{>",
  [anon_sym_import] = "import",
  [anon_sym_SLASH] = "/",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_if] = "if",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_endif] = "endif",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACK] = "{[",
  [anon_sym_RBRACK_RBRACE] = "]}",
  [sym_generalText] = "generalText",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym_source_file] = "source_file",
  [sym__headers] = "_headers",
  [sym__header] = "_header",
  [sym_import_statement] = "import_statement",
  [sym_module] = "module",
  [sym_with_statement] = "with_statement",
  [sym_body] = "body",
  [sym_content] = "content",
  [sym_if_statement] = "if_statement",
  [sym__if_block] = "_if_block",
  [sym__if_end_block] = "_if_end_block",
  [sym_value] = "value",
  [sym_builder] = "builder",
  [aux_sym__headers_repeat1] = "_headers_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE_GT] = anon_sym_LBRACE_GT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACK] = anon_sym_LBRACE_LBRACK,
  [anon_sym_RBRACK_RBRACE] = anon_sym_RBRACK_RBRACE,
  [sym_generalText] = sym_generalText,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym_source_file] = sym_source_file,
  [sym__headers] = sym__headers,
  [sym__header] = sym__header,
  [sym_import_statement] = sym_import_statement,
  [sym_module] = sym_module,
  [sym_with_statement] = sym_with_statement,
  [sym_body] = sym_body,
  [sym_content] = sym_content,
  [sym_if_statement] = sym_if_statement,
  [sym__if_block] = sym__if_block,
  [sym__if_end_block] = sym__if_end_block,
  [sym_value] = sym_value,
  [sym_builder] = sym_builder,
  [aux_sym__headers_repeat1] = aux_sym__headers_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_generalText] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__headers] = {
    .visible = false,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__if_block] = {
    .visible = false,
    .named = true,
  },
  [sym__if_end_block] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_builder] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_module = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_module] = "module",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_generalText);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_generalText);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_generalText);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '{') ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_generalText);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_generalText);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_variable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_GT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACE] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__headers] = STATE(31),
    [sym__header] = STATE(25),
    [sym_import_statement] = STATE(25),
    [sym_with_statement] = STATE(25),
    [sym_body] = STATE(39),
    [sym_content] = STATE(51),
    [sym_if_statement] = STATE(6),
    [sym__if_block] = STATE(5),
    [sym_value] = STATE(6),
    [sym_builder] = STATE(6),
    [aux_sym_content_repeat1] = STATE(6),
    [anon_sym_LBRACE_GT] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACK] = ACTIONS(9),
    [sym_generalText] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(11), 1,
      sym_generalText,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym__if_block,
    STATE(40), 1,
      sym_body,
    STATE(51), 1,
      sym_content,
    STATE(6), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [31] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(20), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(26), 1,
      sym_generalText,
    STATE(5), 1,
      sym__if_block,
    STATE(3), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [56] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(33), 1,
      sym_generalText,
    STATE(4), 1,
      sym__if_block,
    STATE(32), 1,
      sym_content,
    STATE(8), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [81] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(33), 1,
      sym_generalText,
    STATE(4), 1,
      sym__if_block,
    STATE(28), 1,
      sym_content,
    STATE(8), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [106] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_generalText,
    STATE(5), 1,
      sym__if_block,
    STATE(3), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [131] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(42), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(45), 1,
      sym_generalText,
    STATE(4), 1,
      sym__if_block,
    STATE(7), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [153] = 6,
    ACTIONS(29), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACK,
    ACTIONS(48), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(50), 1,
      sym_generalText,
    STATE(4), 1,
      sym__if_block,
    STATE(7), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [175] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [185] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [195] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [205] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [215] = 1,
    ACTIONS(62), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [222] = 1,
    ACTIONS(54), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [229] = 1,
    ACTIONS(68), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [236] = 1,
    ACTIONS(66), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [243] = 1,
    ACTIONS(58), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACK,
      sym_generalText,
  [250] = 2,
    ACTIONS(70), 1,
      anon_sym_LBRACE_GT,
    STATE(33), 3,
      sym__header,
      sym_import_statement,
      sym_with_statement,
  [259] = 3,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    STATE(21), 1,
      aux_sym_module_repeat1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [270] = 3,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_module_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [281] = 3,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_module_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [292] = 2,
    STATE(24), 1,
      aux_sym__headers_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [300] = 2,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [308] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym__headers_repeat1,
  [318] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym__headers_repeat1,
  [328] = 2,
    ACTIONS(96), 1,
      sym_variable,
    STATE(29), 1,
      sym_module,
  [335] = 2,
    ACTIONS(98), 1,
      anon_sym_import,
    ACTIONS(100), 1,
      anon_sym_with,
  [342] = 2,
    ACTIONS(102), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(11), 1,
      sym__if_end_block,
  [349] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [354] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [359] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_LF,
  [366] = 2,
    ACTIONS(112), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(13), 1,
      sym__if_end_block,
  [373] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [378] = 1,
    ACTIONS(114), 1,
      anon_sym_endif,
  [382] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [386] = 1,
    ACTIONS(118), 1,
      sym_type,
  [390] = 1,
    ACTIONS(120), 1,
      sym_variable,
  [394] = 1,
    ACTIONS(122), 1,
      anon_sym_PERCENT_RBRACE,
  [398] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [402] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [406] = 1,
    ACTIONS(126), 1,
      anon_sym_PERCENT_RBRACE,
  [410] = 1,
    ACTIONS(128), 1,
      anon_sym_as,
  [414] = 1,
    ACTIONS(130), 1,
      sym_variable,
  [418] = 1,
    ACTIONS(132), 1,
      sym_variable,
  [422] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACK_RBRACE,
  [426] = 1,
    ACTIONS(136), 1,
      anon_sym_RBRACE_RBRACE,
  [430] = 1,
    ACTIONS(138), 1,
      sym_variable,
  [434] = 1,
    ACTIONS(140), 1,
      sym_variable,
  [438] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE_RBRACE,
  [442] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACK_RBRACE,
  [446] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [450] = 1,
    ACTIONS(148), 1,
      anon_sym_PERCENT_RBRACE,
  [454] = 1,
    ACTIONS(150), 1,
      sym_variable,
  [458] = 1,
    ACTIONS(152), 1,
      sym_variable,
  [462] = 1,
    ACTIONS(154), 1,
      anon_sym_if,
  [466] = 1,
    ACTIONS(156), 1,
      anon_sym_endif,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 229,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 259,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 292,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 328,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 354,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 378,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 386,
  [SMALL_STATE(37)] = 390,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 398,
  [SMALL_STATE(40)] = 402,
  [SMALL_STATE(41)] = 406,
  [SMALL_STATE(42)] = 410,
  [SMALL_STATE(43)] = 414,
  [SMALL_STATE(44)] = 418,
  [SMALL_STATE(45)] = 422,
  [SMALL_STATE(46)] = 426,
  [SMALL_STATE(47)] = 430,
  [SMALL_STATE(48)] = 434,
  [SMALL_STATE(49)] = 438,
  [SMALL_STATE(50)] = 442,
  [SMALL_STATE(51)] = 446,
  [SMALL_STATE(52)] = 450,
  [SMALL_STATE(53)] = 454,
  [SMALL_STATE(54)] = 458,
  [SMALL_STATE(55)] = 462,
  [SMALL_STATE(56)] = 466,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(55),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(44),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(43),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(54),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_end_block, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_end_block, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builder, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builder, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_block, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_greentea(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
