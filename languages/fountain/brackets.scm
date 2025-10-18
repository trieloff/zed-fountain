;; Bracket matching for Fountain

;; Notes use double brackets
("[[" @open) @match
("]]" @close) @match

;; Parentheticals use single parentheses
("(" @open) @match
(")" @close) @match
