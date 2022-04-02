#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_for = 9,
  anon_sym_in = 10,
  anon_sym_endfor = 11,
  anon_sym_RBRACE_RBRACE = 12,
  anon_sym_RBRACK_RBRACE = 13,
  sym_variable = 14,
  sym_type = 15,
  sym__openValue = 16,
  sym__openBuilder = 17,
  sym__openBlock = 18,
  sym__openLine = 19,
  sym_text = 20,
  sym_source_file = 21,
  sym__headers = 22,
  sym__header = 23,
  sym_import_statement = 24,
  sym_module = 25,
  sym_with_statement = 26,
  sym_body = 27,
  sym_content = 28,
  sym_if_statement = 29,
  sym__if_block = 30,
  sym__if_end_block = 31,
  sym_for_loop = 32,
  sym__for_block = 33,
  sym__for_end_block = 34,
  sym_value = 35,
  sym_builder = 36,
  aux_sym__headers_repeat1 = 37,
  aux_sym_module_repeat1 = 38,
  aux_sym_content_repeat1 = 39,
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
      if (eof) ADVANCE(25);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'w') ADVANCE(6);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 23:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
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
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_variable);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_type);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 0, .external_lex_state = 4},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 21},
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
    [sym_source_file] = STATE(35),
    [sym__headers] = STATE(24),
    [sym__header] = STATE(20),
    [sym_import_statement] = STATE(20),
    [sym_with_statement] = STATE(20),
    [sym_body] = STATE(53),
    [sym_content] = STATE(52),
    [sym_if_statement] = STATE(6),
    [sym__if_block] = STATE(4),
    [sym_for_loop] = STATE(6),
    [sym__for_block] = STATE(5),
    [sym_value] = STATE(6),
    [sym_builder] = STATE(6),
    [aux_sym_content_repeat1] = STATE(6),
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
    ACTIONS(7), 1,
      sym__openBlock,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym__if_block,
    STATE(5), 1,
      sym__for_block,
    STATE(34), 1,
      sym_body,
    STATE(52), 1,
      sym_content,
    STATE(6), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [35] = 8,
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
    STATE(5), 1,
      sym__for_block,
    STATE(3), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [64] = 8,
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
    STATE(5), 1,
      sym__for_block,
    STATE(27), 1,
      sym_content,
    STATE(7), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [93] = 8,
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
    STATE(5), 1,
      sym__for_block,
    STATE(28), 1,
      sym_content,
    STATE(7), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [122] = 8,
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
    STATE(5), 1,
      sym__for_block,
    STATE(3), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [151] = 7,
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
    STATE(5), 1,
      sym__for_block,
    STATE(3), 5,
      sym_if_statement,
      sym_for_loop,
      sym_value,
      sym_builder,
      aux_sym_content_repeat1,
  [177] = 1,
    ACTIONS(35), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(37), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [193] = 1,
    ACTIONS(39), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [201] = 1,
    ACTIONS(41), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [209] = 1,
    ACTIONS(43), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [217] = 1,
    ACTIONS(45), 5,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
      ts_builtin_sym_end,
  [225] = 1,
    ACTIONS(47), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [232] = 3,
    ACTIONS(51), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_module_repeat1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [243] = 3,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    STATE(15), 1,
      aux_sym_module_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [254] = 1,
    ACTIONS(58), 4,
      sym__openValue,
      sym__openBuilder,
      sym__openBlock,
      sym_text,
  [261] = 2,
    ACTIONS(9), 1,
      sym__openLine,
    STATE(29), 3,
      sym__header,
      sym_import_statement,
      sym_with_statement,
  [270] = 3,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    STATE(16), 1,
      aux_sym_module_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [281] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym__headers_repeat1,
  [291] = 2,
    ACTIONS(66), 1,
      anon_sym_SLASH,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [299] = 2,
    STATE(23), 1,
      aux_sym__headers_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [307] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__headers_repeat1,
  [317] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_LF,
  [324] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [329] = 2,
    ACTIONS(81), 1,
      sym_variable,
    STATE(32), 1,
      sym_module,
  [336] = 2,
    ACTIONS(83), 1,
      sym__openBlock,
    STATE(10), 1,
      sym__if_end_block,
  [343] = 2,
    ACTIONS(85), 1,
      sym__openBlock,
    STATE(11), 1,
      sym__for_end_block,
  [350] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [355] = 2,
    ACTIONS(87), 1,
      anon_sym_import,
    ACTIONS(89), 1,
      anon_sym_with,
  [362] = 2,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_for,
  [369] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [374] = 1,
    ACTIONS(97), 1,
      sym_variable,
  [378] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [382] = 1,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [386] = 1,
    ACTIONS(103), 1,
      anon_sym_endif,
  [390] = 1,
    ACTIONS(105), 1,
      anon_sym_as,
  [394] = 1,
    ACTIONS(107), 1,
      anon_sym_endfor,
  [398] = 1,
    ACTIONS(109), 1,
      anon_sym_in,
  [402] = 1,
    ACTIONS(111), 1,
      anon_sym_PERCENT_RBRACE,
  [406] = 1,
    ACTIONS(113), 1,
      sym_variable,
  [410] = 1,
    ACTIONS(115), 1,
      sym_variable,
  [414] = 1,
    ACTIONS(117), 1,
      sym_variable,
  [418] = 1,
    ACTIONS(119), 1,
      sym_type,
  [422] = 1,
    ACTIONS(121), 1,
      anon_sym_PERCENT_RBRACE,
  [426] = 1,
    ACTIONS(123), 1,
      anon_sym_PERCENT_RBRACE,
  [430] = 1,
    ACTIONS(125), 1,
      anon_sym_PERCENT_RBRACE,
  [434] = 1,
    ACTIONS(127), 1,
      sym_variable,
  [438] = 1,
    ACTIONS(129), 1,
      sym_variable,
  [442] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACK_RBRACE,
  [446] = 1,
    ACTIONS(133), 1,
      anon_sym_RBRACE_RBRACE,
  [450] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [454] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [458] = 1,
    ACTIONS(137), 1,
      sym_variable,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 243,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 281,
  [SMALL_STATE(21)] = 291,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 307,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 336,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 355,
  [SMALL_STATE(31)] = 362,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 374,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(54),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(48),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builder, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_end_block, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_end_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for_block, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(42),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_block, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__headers, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__headers_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
