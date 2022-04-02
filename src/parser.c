#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_import = 2,
  anon_sym_SLASH = 3,
  anon_sym_with = 4,
  anon_sym_as = 5,
  anon_sym_if = 6,
  anon_sym_PERCENT_RBRACE = 7,
  anon_sym_else = 8,
  anon_sym_endif = 9,
  anon_sym_for = 10,
  anon_sym_in = 11,
  anon_sym_endfor = 12,
  anon_sym_RBRACE_RBRACE = 13,
  anon_sym_RBRACK_RBRACE = 14,
  sym_variable = 15,
  sym_type = 16,
  sym__openValue = 17,
  sym__openBuilder = 18,
  sym__openBlock = 19,
  sym__openLine = 20,
  sym_text = 21,
  sym_source_file = 22,
  sym__headers = 23,
  sym__header = 24,
  sym_import_statement = 25,
  sym_module = 26,
  sym_with_statement = 27,
  sym_body = 28,
  sym_content = 29,
  sym_if_statement = 30,
  sym__if_block = 31,
  sym__else_block = 32,
  sym__if_end_block = 33,
  sym_for_loop = 34,
  sym__for_block = 35,
  sym__for_end_block = 36,
  sym_value = 37,
  sym_builder = 38,
  aux_sym__headers_repeat1 = 39,
  aux_sym_module_repeat1 = 40,
  aux_sym_content_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_import] = "import",
  [anon_sym_SLASH] = "/",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_if] = "if",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_RBRACK_RBRACE] = "]}",
  [sym_variable] = "variable",
  [sym_type] = "type",
  [sym__openValue] = "_openValue",
  [sym__openBuilder] = "_openBuilder",
  [sym__openBlock] = "_openBlock",
  [sym__openLine] = "_openLine",
  [sym_text] = "text",
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
  [sym__else_block] = "_else_block",
  [sym__if_end_block] = "_if_end_block",
  [sym_for_loop] = "for_loop",
  [sym__for_block] = "_for_block",
  [sym__for_end_block] = "_for_end_block",
  [sym_value] = "value",
  [sym_builder] = "builder",
  [aux_sym__headers_repeat1] = "_headers_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_RBRACK_RBRACE] = anon_sym_RBRACK_RBRACE,
  [sym_variable] = sym_variable,
  [sym_type] = sym_type,
  [sym__openValue] = sym__openValue,
  [sym__openBuilder] = sym__openBuilder,
  [sym__openBlock] = sym__openBlock,
  [sym__openLine] = sym__openLine,
  [sym_text] = sym_text,
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
  [sym__else_block] = sym__else_block,
  [sym__if_end_block] = sym__if_end_block,
  [sym_for_loop] = sym_for_loop,
  [sym__for_block] = sym__for_block,
  [sym__for_end_block] = sym__for_end_block,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__openValue] = {
    .visible = false,
    .named = true,
  },
  [sym__openBuilder] = {
    .visible = false,
    .named = true,
  },
  [sym__openBlock] = {
    .visible = false,
    .named = true,
  },
  [sym__openLine] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
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
  [sym__else_block] = {
    .visible = false,
    .named = true,
  },
  [sym__if_end_block] = {
    .visible = false,
    .named = true,
  },
  [sym_for_loop] = {
    .visible = true,
    .named = true,
  },
  [sym__for_block] = {
    .visible = false,
    .named = true,
  },
  [sym__for_end_block] = {
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
      if (eof) ADVANCE(27);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_variable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 0, .external_lex_state = 4},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 23},
};

enum {
  ts_external_token__openValue = 0,
  ts_external_token__openBuilder = 1,
  ts_external_token__openBlock = 2,
  ts_external_token__openLine = 3,
  ts_external_token_text = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__openValue] = sym__openValue,
  [ts_external_token__openBuilder] = sym__openBuilder,
  [ts_external_token__openBlock] = sym__openBlock,
  [ts_external_token__openLine] = sym__openLine,
  [ts_external_token_text] = sym_text,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__openValue] = true,
    [ts_external_token__openBuilder] = true,
    [ts_external_token__openBlock] = true,
    [ts_external_token__openLine] = true,
    [ts_external_token_text] = true,
  },
  [2] = {
    [ts_external_token__openValue] = true,
    [ts_external_token__openBuilder] = true,
    [ts_external_token__openBlock] = true,
    [ts_external_token_text] = true,
  },
  [3] = {
    [ts_external_token__openLine] = true,
  },
  [4] = {
    [ts_external_token__openBlock] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACE] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym__openValue] = ACTIONS(1),
    [sym__openBuilder] = ACTIONS(1),
    [sym__openBlock] = ACTIONS(1),
    [sym__openLine] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__headers] = STATE(46),
    [sym__header] = STATE(35),
    [sym_import_statement] = STATE(35),
    [sym_with_statement] = STATE(35),
    [sym_body] = STATE(70),
    [sym_content] = STATE(68),
    [sym_if_statement] = STATE(8),
    [sym__if_block] = STATE(2),
    [sym_for_loop] = STATE(8),
    [sym__for_block] = STATE(6),
    [sym_value] = STATE(8),
    [sym_builder] = STATE(8),
    [aux_sym_content_repeat1] = STATE(8),
    [sym__openValue] = ACTIONS(3),
    [sym__openBuilder] = ACTIONS(5),
    [sym__openBlock] = ACTIONS(7),
    [sym__openLine] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(13), 1,
      sym__openBlock,
    ACTIONS(15), 1,
      sym_text,
    STATE(2), 1,
      sym__if_block,
    STATE(4), 1,
      sym__else_block,
    STATE(6), 1,
      sym__for_block,
    STATE(12), 1,
      sym__if_end_block,
    STATE(29), 1,
      sym_content,
    STATE(9), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [35] = 10,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(51), 1,
      sym_body,
    STATE(68), 1,
      sym_content,
    STATE(8), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [70] = 9,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(19), 1,
      sym__openBlock,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(14), 1,
      sym__if_end_block,
    STATE(45), 1,
      sym_content,
    STATE(9), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [102] = 9,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(19), 1,
      sym__openBlock,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(19), 1,
      sym__if_end_block,
    STATE(38), 1,
      sym_content,
    STATE(9), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [134] = 9,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(15), 1,
      sym_text,
    ACTIONS(21), 1,
      sym__openBlock,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(11), 1,
      sym__for_end_block,
    STATE(36), 1,
      sym_content,
    STATE(9), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [166] = 8,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__openValue,
    ACTIONS(28), 1,
      sym__openBuilder,
    ACTIONS(31), 1,
      sym__openBlock,
    ACTIONS(34), 1,
      sym_text,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(7), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [195] = 8,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_text,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(7), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [224] = 7,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(37), 1,
      sym__openBlock,
    ACTIONS(39), 1,
      sym_text,
    STATE(2), 1,
      sym__if_block,
    STATE(6), 1,
      sym__for_block,
    STATE(7), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [250] = 1,
    ACTIONS(41), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [258] = 1,
    ACTIONS(43), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [266] = 1,
    ACTIONS(45), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [274] = 1,
    ACTIONS(47), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [282] = 1,
    ACTIONS(49), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [290] = 1,
    ACTIONS(51), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [298] = 1,
    ACTIONS(53), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [306] = 1,
    ACTIONS(55), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(57), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(59), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [330] = 3,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_module_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [341] = 2,
    ACTIONS(9), 1,
      sym__openLine,
    STATE(42), 3,
      sym__header,
      sym_import_statement,
      sym_with_statement,
  [350] = 3,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      aux_sym_module_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [361] = 4,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(72), 1,
      anon_sym_else,
    ACTIONS(74), 1,
      anon_sym_endif,
    ACTIONS(76), 1,
      anon_sym_for,
  [374] = 1,
    ACTIONS(78), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [381] = 1,
    ACTIONS(80), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [388] = 1,
    ACTIONS(82), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [395] = 1,
    ACTIONS(84), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [402] = 3,
    ACTIONS(68), 1,
      anon_sym_SLASH,
    STATE(20), 1,
      aux_sym_module_repeat1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [413] = 3,
    ACTIONS(88), 1,
      sym__openBlock,
    STATE(5), 1,
      sym__else_block,
    STATE(14), 1,
      sym__if_end_block,
  [423] = 3,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(76), 1,
      anon_sym_for,
    ACTIONS(90), 1,
      anon_sym_endfor,
  [433] = 2,
    STATE(32), 1,
      aux_sym__headers_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [441] = 3,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym__headers_repeat1,
  [451] = 2,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [459] = 3,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(74), 1,
      anon_sym_endif,
    ACTIONS(76), 1,
      anon_sym_for,
  [469] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_LF,
    STATE(31), 1,
      aux_sym__headers_repeat1,
  [479] = 2,
    ACTIONS(105), 1,
      sym__openBlock,
    STATE(13), 1,
      sym__for_end_block,
  [486] = 2,
    ACTIONS(70), 1,
      anon_sym_if,
    ACTIONS(76), 1,
      anon_sym_for,
  [493] = 2,
    ACTIONS(107), 1,
      sym__openBlock,
    STATE(15), 1,
      sym__if_end_block,
  [500] = 2,
    ACTIONS(109), 1,
      anon_sym_as,
    ACTIONS(111), 1,
      anon_sym_in,
  [507] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [512] = 2,
    ACTIONS(115), 1,
      sym_variable,
    STATE(40), 1,
      sym_module,
  [519] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [524] = 2,
    ACTIONS(72), 1,
      anon_sym_else,
    ACTIONS(74), 1,
      anon_sym_endif,
  [531] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [536] = 2,
    ACTIONS(107), 1,
      sym__openBlock,
    STATE(19), 1,
      sym__if_end_block,
  [543] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LF,
  [550] = 2,
    ACTIONS(123), 1,
      anon_sym_import,
    ACTIONS(125), 1,
      anon_sym_with,
  [557] = 1,
    ACTIONS(127), 1,
      sym_variable,
  [561] = 1,
    ACTIONS(90), 1,
      anon_sym_endfor,
  [565] = 1,
    ACTIONS(129), 1,
      anon_sym_PERCENT_RBRACE,
  [569] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [573] = 1,
    ACTIONS(133), 1,
      sym_type,
  [577] = 1,
    ACTIONS(135), 1,
      sym_variable,
  [581] = 1,
    ACTIONS(137), 1,
      sym_variable,
  [585] = 1,
    ACTIONS(139), 1,
      anon_sym_PERCENT_RBRACE,
  [589] = 1,
    ACTIONS(141), 1,
      sym_type,
  [593] = 1,
    ACTIONS(143), 1,
      anon_sym_PERCENT_RBRACE,
  [597] = 1,
    ACTIONS(145), 1,
      sym_variable,
  [601] = 1,
    ACTIONS(147), 1,
      anon_sym_as,
  [605] = 1,
    ACTIONS(149), 1,
      anon_sym_PERCENT_RBRACE,
  [609] = 1,
    ACTIONS(74), 1,
      anon_sym_endif,
  [613] = 1,
    ACTIONS(151), 1,
      sym_variable,
  [617] = 1,
    ACTIONS(153), 1,
      anon_sym_in,
  [621] = 1,
    ACTIONS(155), 1,
      anon_sym_PERCENT_RBRACE,
  [625] = 1,
    ACTIONS(157), 1,
      sym_variable,
  [629] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACK_RBRACE,
  [633] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACE_RBRACE,
  [637] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [641] = 1,
    ACTIONS(165), 1,
      sym_variable,
  [645] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [649] = 1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_RBRACE,
  [653] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [657] = 1,
    ACTIONS(171), 1,
      sym_variable,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 381,
  [SMALL_STATE(26)] = 388,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 413,
  [SMALL_STATE(30)] = 423,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 451,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 479,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 493,
  [SMALL_STATE(39)] = 500,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 512,
  [SMALL_STATE(42)] = 519,
  [SMALL_STATE(43)] = 524,
  [SMALL_STATE(44)] = 531,
  [SMALL_STATE(45)] = 536,
  [SMALL_STATE(46)] = 543,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 561,
  [SMALL_STATE(50)] = 565,
  [SMALL_STATE(51)] = 569,
  [SMALL_STATE(52)] = 573,
  [SMALL_STATE(53)] = 577,
  [SMALL_STATE(54)] = 581,
  [SMALL_STATE(55)] = 585,
  [SMALL_STATE(56)] = 589,
  [SMALL_STATE(57)] = 593,
  [SMALL_STATE(58)] = 597,
  [SMALL_STATE(59)] = 601,
  [SMALL_STATE(60)] = 605,
  [SMALL_STATE(61)] = 609,
  [SMALL_STATE(62)] = 613,
  [SMALL_STATE(63)] = 617,
  [SMALL_STATE(64)] = 621,
  [SMALL_STATE(65)] = 625,
  [SMALL_STATE(66)] = 629,
  [SMALL_STATE(67)] = 633,
  [SMALL_STATE(68)] = 637,
  [SMALL_STATE(69)] = 641,
  [SMALL_STATE(70)] = 645,
  [SMALL_STATE(71)] = 649,
  [SMALL_STATE(72)] = 653,
  [SMALL_STATE(73)] = 657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(58),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(73),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builder, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_end_block, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_end_block, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else_block, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_block, 8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_block, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_matcha_external_scanner_create(void);
void tree_sitter_matcha_external_scanner_destroy(void *);
bool tree_sitter_matcha_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_matcha_external_scanner_serialize(void *, char *);
void tree_sitter_matcha_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_matcha(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_matcha_external_scanner_create,
      tree_sitter_matcha_external_scanner_destroy,
      tree_sitter_matcha_external_scanner_scan,
      tree_sitter_matcha_external_scanner_serialize,
      tree_sitter_matcha_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
