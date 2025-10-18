;; Fountain screenplay syntax highlighting

;; Title page - subtle highlighting
;; Keys are highlighted, continuation lines use default text
(title_key) @keyword
(title_key_with_space) @keyword

;; Scene headings (INT./EXT./etc.) with scene numbers
(scene_start) @keyword
(scene_heading (description) @emphasis.strong)
(scene_number) @number

;; Section headings (# ACT I, ## OPENING SEQUENCE)
(section_start) @punctuation.special
(section_heading (description) @emphasis.strong)

;; Character names (ALL CAPS, may include (O.S.), (V.O.), etc.)
(character) @label

;; Dialogue text
(dialogue (line) @string)

;; Parentheticals (actor directions in dialogue)
(parenthetical) @comment.doc

;; Action/description lines (narrative prose and forced !)
(action (line)) @primary
(forced_action_start) @operator

;; Transitions (CUT TO:, FADE OUT:, forced >)
(transition) @keyword
(forced_transition_start) @keyword

;; Notes ([[like this]])
(note_start) @punctuation.bracket
(note_content) @comment

;; Forced character @NAME
(forced_character_start) @operator

;; Lyrics ~text
(lyric_start) @operator
(lyric) @string.special

;; Centered text >text<
(centered_start) @operator
(centered) @emphasis

;; Page breaks ===
(page_break) @punctuation.special
(page_break_marker) @punctuation.special

;; Synopses = text
(synopsis_start) @operator
(synopsis) @comment.doc

;; Boneyard /* ... */
(boneyard_start) @comment
(boneyard) @comment
