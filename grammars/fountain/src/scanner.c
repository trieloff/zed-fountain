#include "tree_sitter/parser.h"
#include <string.h>
#include <wctype.h>

enum TokenType {
  TITLE_PAGE_KEY,
  SCENE_START,
  SECTION_START,
  NOTE_START,
};

void *tree_sitter_fountain_external_scanner_create() {
  return NULL;
}

static bool match_keyword(TSLexer *lexer, const char *keyword) {
  for (size_t i = 0; keyword[i] != '\0'; i++) {
    if (lexer->lookahead != keyword[i]) return false;
    lexer->advance(lexer, false);
  }
  return true;
}

bool tree_sitter_fountain_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  // Try title page keywords
  if (valid_symbols[TITLE_PAGE_KEY]) {
    if (match_keyword(lexer, "Title:") ||
        match_keyword(lexer, "Credit:") ||
        match_keyword(lexer, "Author:") ||
        match_keyword(lexer, "Source:") ||
        match_keyword(lexer, "Draft date:") ||
        match_keyword(lexer, "Contact:")) {
      lexer->result_symbol = TITLE_PAGE_KEY;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try section start (# markers)
  if (valid_symbols[SECTION_START] && lexer->lookahead == '#') {
    while (lexer->lookahead == '#') {
      lexer->advance(lexer, false);
    }
    lexer->result_symbol = SECTION_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try scene start (INT., EXT., etc.)
  if (valid_symbols[SCENE_START]) {
    if (match_keyword(lexer, "INT.") ||
        match_keyword(lexer, "EXT.") ||
        match_keyword(lexer, "INT./EXT.") ||
        match_keyword(lexer, "EST.")) {
      lexer->result_symbol = SCENE_START;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try note start ([[)
  if (valid_symbols[NOTE_START] && match_keyword(lexer, "[[")) {
    lexer->result_symbol = NOTE_START;
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

void tree_sitter_fountain_external_scanner_destroy(void *payload) {
  /* NOOP */
}

unsigned tree_sitter_fountain_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_fountain_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  /* NOOP */
}
