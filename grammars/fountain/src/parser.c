#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SPACE = 1,
  anon_sym_LF = 2,
  aux_sym_character_token1 = 3,
  anon_sym_LPAREN = 4,
  aux_sym_parenthetical_token1 = 5,
  anon_sym_RPAREN = 6,
  anon_sym_CUTTO_COLON = 7,
  anon_sym_FADEOUT_COLON = 8,
  anon_sym_FADEIN_COLON = 9,
  anon_sym_FADETO_COLON = 10,
  anon_sym_DISSOLVETO_COLON = 11,
  anon_sym_MATCHCUTTO_COLON = 12,
  aux_sym_transition_token1 = 13,
  anon_sym_RBRACK_RBRACK = 14,
  sym_note_content = 15,
  aux_sym_line_token1 = 16,
  sym_title_page_key = 17,
  sym_scene_start = 18,
  sym_section_start = 19,
  sym_note_start = 20,
  sym_document = 21,
  sym__element = 22,
  sym_title_page_field = 23,
  sym_scene_heading = 24,
  sym_character = 25,
  sym_dialogue_block = 26,
  sym_dialogue = 27,
  sym_parenthetical = 28,
  sym_action = 29,
  sym_transition = 30,
  sym_section_heading = 31,
  sym_note = 32,
  sym_line = 33,
  sym_description = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_dialogue_block_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SPACE] = " ",
  [anon_sym_LF] = "\n",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CUTTO_COLON] = "CUT TO:",
  [anon_sym_FADEOUT_COLON] = "FADE OUT:",
  [anon_sym_FADEIN_COLON] = "FADE IN:",
  [anon_sym_FADETO_COLON] = "FADE TO:",
  [anon_sym_DISSOLVETO_COLON] = "DISSOLVE TO:",
  [anon_sym_MATCHCUTTO_COLON] = "MATCH CUT TO:",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_note_content] = "note_content",
  [aux_sym_line_token1] = "line_token1",
  [sym_title_page_key] = "title_page_key",
  [sym_scene_start] = "scene_start",
  [sym_section_start] = "section_start",
  [sym_note_start] = "note_start",
  [sym_document] = "document",
  [sym__element] = "_element",
  [sym_title_page_field] = "title_page_field",
  [sym_scene_heading] = "scene_heading",
  [sym_character] = "character",
  [sym_dialogue_block] = "dialogue_block",
  [sym_dialogue] = "dialogue",
  [sym_parenthetical] = "parenthetical",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_section_heading] = "section_heading",
  [sym_note] = "note",
  [sym_line] = "line",
  [sym_description] = "description",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_CUTTO_COLON] = anon_sym_CUTTO_COLON,
  [anon_sym_FADEOUT_COLON] = anon_sym_FADEOUT_COLON,
  [anon_sym_FADEIN_COLON] = anon_sym_FADEIN_COLON,
  [anon_sym_FADETO_COLON] = anon_sym_FADETO_COLON,
  [anon_sym_DISSOLVETO_COLON] = anon_sym_DISSOLVETO_COLON,
  [anon_sym_MATCHCUTTO_COLON] = anon_sym_MATCHCUTTO_COLON,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_note_content] = sym_note_content,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [sym_title_page_key] = sym_title_page_key,
  [sym_scene_start] = sym_scene_start,
  [sym_section_start] = sym_section_start,
  [sym_note_start] = sym_note_start,
  [sym_document] = sym_document,
  [sym__element] = sym__element,
  [sym_title_page_field] = sym_title_page_field,
  [sym_scene_heading] = sym_scene_heading,
  [sym_character] = sym_character,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_dialogue] = sym_dialogue,
  [sym_parenthetical] = sym_parenthetical,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_section_heading] = sym_section_heading,
  [sym_note] = sym_note,
  [sym_line] = sym_line,
  [sym_description] = sym_description,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CUTTO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADEOUT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADEIN_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADETO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISSOLVETO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATCHCUTTO_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_transition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_title_page_key] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_start] = {
    .visible = true,
    .named = true,
  },
  [sym_section_start] = {
    .visible = true,
    .named = true,
  },
  [sym_note_start] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_title_page_field] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_section_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(14);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == ']') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(119);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(103);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(21);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'C') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'H') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'V') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'D') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CUTTO_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_CUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_FADEOUT_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_FADEOUT_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_FADEIN_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_FADEIN_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_FADETO_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_FADETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DISSOLVETO_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DISSOLVETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_MATCHCUTTO_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_MATCHCUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21, .external_lex_state = 1},
  [2] = {.lex_state = 21, .external_lex_state = 1},
  [3] = {.lex_state = 21, .external_lex_state = 1},
  [4] = {.lex_state = 22, .external_lex_state = 1},
  [5] = {.lex_state = 22, .external_lex_state = 1},
  [6] = {.lex_state = 22, .external_lex_state = 1},
  [7] = {.lex_state = 22, .external_lex_state = 1},
  [8] = {.lex_state = 21, .external_lex_state = 1},
  [9] = {.lex_state = 21, .external_lex_state = 1},
  [10] = {.lex_state = 21, .external_lex_state = 1},
  [11] = {.lex_state = 21, .external_lex_state = 1},
  [12] = {.lex_state = 21, .external_lex_state = 1},
  [13] = {.lex_state = 21, .external_lex_state = 1},
  [14] = {.lex_state = 21, .external_lex_state = 1},
  [15] = {.lex_state = 21, .external_lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CUTTO_COLON] = ACTIONS(1),
    [anon_sym_FADEOUT_COLON] = ACTIONS(1),
    [anon_sym_FADEIN_COLON] = ACTIONS(1),
    [anon_sym_FADETO_COLON] = ACTIONS(1),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(1),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(1),
    [aux_sym_transition_token1] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_title_page_key] = ACTIONS(1),
    [sym_scene_start] = ACTIONS(1),
    [sym_section_start] = ACTIONS(1),
    [sym_note_start] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(32),
    [sym__element] = STATE(3),
    [sym_title_page_field] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(16),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_character_token1] = ACTIONS(5),
    [anon_sym_CUTTO_COLON] = ACTIONS(7),
    [anon_sym_FADEOUT_COLON] = ACTIONS(7),
    [anon_sym_FADEIN_COLON] = ACTIONS(7),
    [anon_sym_FADETO_COLON] = ACTIONS(7),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(7),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(7),
    [aux_sym_transition_token1] = ACTIONS(7),
    [aux_sym_line_token1] = ACTIONS(9),
    [sym_title_page_key] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
  },
  [2] = {
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(16),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(2),
    [sym_note] = STATE(2),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_character_token1] = ACTIONS(21),
    [anon_sym_CUTTO_COLON] = ACTIONS(24),
    [anon_sym_FADEOUT_COLON] = ACTIONS(24),
    [anon_sym_FADEIN_COLON] = ACTIONS(24),
    [anon_sym_FADETO_COLON] = ACTIONS(24),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(24),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(24),
    [aux_sym_transition_token1] = ACTIONS(24),
    [aux_sym_line_token1] = ACTIONS(27),
    [sym_title_page_key] = ACTIONS(30),
    [sym_scene_start] = ACTIONS(33),
    [sym_section_start] = ACTIONS(36),
    [sym_note_start] = ACTIONS(39),
  },
  [3] = {
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(16),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(2),
    [sym_note] = STATE(2),
    [sym_line] = STATE(26),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_character_token1] = ACTIONS(5),
    [anon_sym_CUTTO_COLON] = ACTIONS(7),
    [anon_sym_FADEOUT_COLON] = ACTIONS(7),
    [anon_sym_FADEIN_COLON] = ACTIONS(7),
    [anon_sym_FADETO_COLON] = ACTIONS(7),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(7),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(7),
    [aux_sym_transition_token1] = ACTIONS(7),
    [aux_sym_line_token1] = ACTIONS(9),
    [sym_title_page_key] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
  },
  [4] = {
    [sym_dialogue] = STATE(4),
    [sym_parenthetical] = STATE(4),
    [sym_line] = STATE(25),
    [aux_sym_dialogue_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_character_token1] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_CUTTO_COLON] = ACTIONS(46),
    [anon_sym_FADEOUT_COLON] = ACTIONS(46),
    [anon_sym_FADEIN_COLON] = ACTIONS(46),
    [anon_sym_FADETO_COLON] = ACTIONS(46),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(46),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(46),
    [aux_sym_transition_token1] = ACTIONS(46),
    [aux_sym_line_token1] = ACTIONS(51),
    [sym_title_page_key] = ACTIONS(44),
    [sym_scene_start] = ACTIONS(44),
    [sym_section_start] = ACTIONS(44),
    [sym_note_start] = ACTIONS(44),
  },
  [5] = {
    [sym_dialogue] = STATE(4),
    [sym_parenthetical] = STATE(4),
    [sym_line] = STATE(25),
    [aux_sym_dialogue_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_character_token1] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_CUTTO_COLON] = ACTIONS(56),
    [anon_sym_FADEOUT_COLON] = ACTIONS(56),
    [anon_sym_FADEIN_COLON] = ACTIONS(56),
    [anon_sym_FADETO_COLON] = ACTIONS(56),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(56),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(56),
    [aux_sym_transition_token1] = ACTIONS(56),
    [aux_sym_line_token1] = ACTIONS(56),
    [sym_title_page_key] = ACTIONS(54),
    [sym_scene_start] = ACTIONS(54),
    [sym_section_start] = ACTIONS(54),
    [sym_note_start] = ACTIONS(54),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(60), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(62), 10,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [20] = 2,
    ACTIONS(64), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(66), 10,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [40] = 2,
    ACTIONS(68), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(70), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [59] = 2,
    ACTIONS(72), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(74), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [78] = 2,
    ACTIONS(76), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(78), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [97] = 2,
    ACTIONS(80), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(82), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [116] = 2,
    ACTIONS(84), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(86), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [135] = 2,
    ACTIONS(88), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(90), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [154] = 2,
    ACTIONS(92), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(94), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [173] = 2,
    ACTIONS(96), 5,
      sym_title_page_key,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      ts_builtin_sym_end,
    ACTIONS(98), 9,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
      aux_sym_line_token1,
  [192] = 4,
    ACTIONS(9), 1,
      aux_sym_line_token1,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_line,
    STATE(5), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [207] = 2,
    ACTIONS(100), 1,
      anon_sym_SPACE,
    ACTIONS(102), 1,
      anon_sym_LF,
  [214] = 2,
    ACTIONS(104), 1,
      aux_sym_line_token1,
    STATE(29), 1,
      sym_description,
  [221] = 2,
    ACTIONS(106), 1,
      anon_sym_SPACE,
    ACTIONS(108), 1,
      anon_sym_LF,
  [228] = 1,
    ACTIONS(110), 2,
      anon_sym_LPAREN,
      aux_sym_line_token1,
  [233] = 2,
    ACTIONS(104), 1,
      aux_sym_line_token1,
    STATE(23), 1,
      sym_description,
  [240] = 2,
    ACTIONS(104), 1,
      aux_sym_line_token1,
    STATE(28), 1,
      sym_description,
  [247] = 1,
    ACTIONS(112), 1,
      anon_sym_LF,
  [251] = 1,
    ACTIONS(114), 1,
      aux_sym_parenthetical_token1,
  [255] = 1,
    ACTIONS(116), 1,
      anon_sym_LF,
  [259] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [263] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [267] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [271] = 1,
    ACTIONS(124), 1,
      anon_sym_LF,
  [275] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [279] = 1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [283] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [287] = 1,
    ACTIONS(132), 1,
      anon_sym_LF,
  [291] = 1,
    ACTIONS(134), 1,
      anon_sym_LF,
  [295] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [299] = 1,
    ACTIONS(138), 1,
      sym_note_content,
  [303] = 1,
    ACTIONS(140), 1,
      anon_sym_RBRACK_RBRACK,
  [307] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [311] = 1,
    ACTIONS(144), 1,
      anon_sym_SPACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 173,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 233,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 247,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 255,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 263,
  [SMALL_STATE(28)] = 267,
  [SMALL_STATE(29)] = 271,
  [SMALL_STATE(30)] = 275,
  [SMALL_STATE(31)] = 279,
  [SMALL_STATE(32)] = 283,
  [SMALL_STATE(33)] = 287,
  [SMALL_STATE(34)] = 291,
  [SMALL_STATE(35)] = 295,
  [SMALL_STATE(36)] = 299,
  [SMALL_STATE(37)] = 303,
  [SMALL_STATE(38)] = 307,
  [SMALL_STATE(39)] = 311,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_title_page_key = 0,
  ts_external_token_scene_start = 1,
  ts_external_token_section_start = 2,
  ts_external_token_note_start = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_title_page_key] = sym_title_page_key,
  [ts_external_token_scene_start] = sym_scene_start,
  [ts_external_token_section_start] = sym_section_start,
  [ts_external_token_note_start] = sym_note_start,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_title_page_key] = true,
    [ts_external_token_scene_start] = true,
    [ts_external_token_section_start] = true,
    [ts_external_token_note_start] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fountain_external_scanner_create(void);
void tree_sitter_fountain_external_scanner_destroy(void *);
bool tree_sitter_fountain_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fountain_external_scanner_serialize(void *, char *);
void tree_sitter_fountain_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fountain(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fountain_external_scanner_create,
      tree_sitter_fountain_external_scanner_destroy,
      tree_sitter_fountain_external_scanner_scan,
      tree_sitter_fountain_external_scanner_serialize,
      tree_sitter_fountain_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
