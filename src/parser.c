#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_import = 2,
  anon_sym_SLASH = 3,
  anon_sym_with = 4,
  anon_sym_as = 5,
  anon_sym_if = 6,
  anon_sym_PERCENT_RBRACE = 7,
  anon_sym_endif = 8,
  anon_sym_RBRACE_RBRACE = 9,
  anon_sym_RBRACK_RBRACE = 10,
  sym_variable = 11,
  sym_type = 12,
  sym__openValue = 13,
  sym__openBuilder = 14,
  sym__openBlock = 15,
  sym__openLine = 16,
  sym_text = 17,
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
  [anon_sym_import] = "import",
  [anon_sym_SLASH] = "/",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_if] = "if",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_endif] = "endif",
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
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_endif] = anon_sym_endif,
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
  [anon_sym_endif] = {
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
      if (eof) ADVANCE(21);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 19:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 0},
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
    [anon_sym_endif] = ACTIONS(1),
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
    [sym_source_file] = STATE(43),
    [sym__headers] = STATE(22),
    [sym__header] = STATE(18),
    [sym_import_statement] = STATE(18),
    [sym_with_statement] = STATE(18),
    [sym_body] = STATE(41),
    [sym_content] = STATE(33),
    [sym_if_statement] = STATE(5),
    [sym__if_block] = STATE(4),
    [sym_value] = STATE(5),
    [sym_builder] = STATE(5),
    [aux_sym_content_repeat1] = STATE(5),
    [sym__openValue] = ACTIONS(3),
    [sym__openBuilder] = ACTIONS(5),
    [sym__openBlock] = ACTIONS(7),
    [sym__openLine] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym__if_block,
    STATE(27), 1,
      sym_body,
    STATE(33), 1,
      sym_content,
    STATE(5), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [31] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__openValue,
    ACTIONS(20), 1,
      sym__openBuilder,
    ACTIONS(23), 1,
      sym__openBlock,
    ACTIONS(26), 1,
      sym_text,
    STATE(4), 1,
      sym__if_block,
    STATE(3), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [56] = 7,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(29), 1,
      sym_text,
    STATE(4), 1,
      sym__if_block,
    STATE(24), 1,
      sym_content,
    STATE(6), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [81] = 7,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_text,
    STATE(4), 1,
      sym__if_block,
    STATE(3), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [106] = 6,
    ACTIONS(3), 1,
      sym__openValue,
    ACTIONS(5), 1,
      sym__openBuilder,
    ACTIONS(31), 1,
      sym__openBlock,
    ACTIONS(33), 1,
      sym_text,
    STATE(4), 1,
      sym__if_block,
    STATE(3), 4,
      sym_if_statement,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [128] = 1,
    ACTIONS(35), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(37), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(39), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [152] = 1,
    ACTIONS(41), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [160] = 1,
    ACTIONS(43), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [167] = 3,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      aux_sym_module_repeat1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [178] = 3,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_module_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [189] = 3,
    ACTIONS(47), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_module_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [200] = 2,
    ACTIONS(9), 1,
      sym__openLine,
    STATE(26), 3,
      sym__header,
      sym_import_statement,
      sym_with_statement,
  [209] = 2,
    STATE(19), 1,
      aux_sym__headers_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [217] = 2,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [225] = 3,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym__headers_repeat1,
  [235] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__headers_repeat1,
  [245] = 1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [250] = 2,
    ACTIONS(71), 1,
      sym_variable,
    STATE(20), 1,
      sym_module,
  [257] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_LF,
  [264] = 1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [269] = 2,
    ACTIONS(79), 1,
      sym__openBlock,
    STATE(8), 1,
      sym__if_end_block,
  [276] = 2,
    ACTIONS(81), 1,
      anon_sym_import,
    ACTIONS(83), 1,
      anon_sym_with,
  [283] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [288] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [292] = 1,
    ACTIONS(87), 1,
      anon_sym_PERCENT_RBRACE,
  [296] = 1,
    ACTIONS(89), 1,
      anon_sym_as,
  [300] = 1,
    ACTIONS(91), 1,
      sym_variable,
  [304] = 1,
    ACTIONS(93), 1,
      sym_variable,
  [308] = 1,
    ACTIONS(95), 1,
      anon_sym_endif,
  [312] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [316] = 1,
    ACTIONS(99), 1,
      anon_sym_if,
  [320] = 1,
    ACTIONS(101), 1,
      sym_variable,
  [324] = 1,
    ACTIONS(103), 1,
      anon_sym_RBRACE_RBRACE,
  [328] = 1,
    ACTIONS(105), 1,
      sym_type,
  [332] = 1,
    ACTIONS(107), 1,
      anon_sym_PERCENT_RBRACE,
  [336] = 1,
    ACTIONS(109), 1,
      sym_variable,
  [340] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACK_RBRACE,
  [344] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [348] = 1,
    ACTIONS(113), 1,
      sym_variable,
  [352] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 250,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 264,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 283,
  [SMALL_STATE(27)] = 288,
  [SMALL_STATE(28)] = 292,
  [SMALL_STATE(29)] = 296,
  [SMALL_STATE(30)] = 300,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 308,
  [SMALL_STATE(33)] = 312,
  [SMALL_STATE(34)] = 316,
  [SMALL_STATE(35)] = 320,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 328,
  [SMALL_STATE(38)] = 332,
  [SMALL_STATE(39)] = 336,
  [SMALL_STATE(40)] = 340,
  [SMALL_STATE(41)] = 344,
  [SMALL_STATE(42)] = 348,
  [SMALL_STATE(43)] = 352,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(42),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_end_block, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builder, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(35),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_greentea_external_scanner_create(void);
void tree_sitter_greentea_external_scanner_destroy(void *);
bool tree_sitter_greentea_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_greentea_external_scanner_serialize(void *, char *);
void tree_sitter_greentea_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_greentea_external_scanner_create,
      tree_sitter_greentea_external_scanner_destroy,
      tree_sitter_greentea_external_scanner_scan,
      tree_sitter_greentea_external_scanner_serialize,
      tree_sitter_greentea_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
