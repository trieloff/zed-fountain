;; Bracket matching for Fountain screenplay format

;; Notes: [[text]]
(note
  (note_start) @open
  "]]" @close)

;; Parentheticals in dialogue: (wryly)
(parenthetical
  "(" @open
  ")" @close)

;; Boneyard (comments): /* text */
(boneyard
  (boneyard_start) @open
  "*/" @close)
