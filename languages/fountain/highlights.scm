;; Fountain screenplay syntax highlighting

;; Title page
(title_page_key) @keyword
(title_page_field (description) @string.special)

;; Scene headings (INT./EXT./etc.)
(scene_start) @keyword
(scene_heading (description) @emphasis.strong)

;; Section headings (# ACT I, ## OPENING SEQUENCE)
(section_start) @punctuation.special
(section_heading (description) @emphasis.strong)

;; Character names (ALL CAPS, may include (O.S.), (V.O.), etc.)
(character) @label

;; Dialogue text
(dialogue (line) @string)

;; Parentheticals (actor directions in dialogue)
(parenthetical) @comment.doc

;; Action/description lines (narrative prose)
(action (line)) @primary

;; Transitions (CUT TO:, FADE OUT:, etc.)
(transition) @keyword

;; Notes ([[like this]])
(note_start) @punctuation.bracket
(note_content) @comment
