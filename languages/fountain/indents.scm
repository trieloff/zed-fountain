;; Indentation rules for Fountain

;; Dialogue blocks are indented
(dialogue_block) @indent

;; Scene and section headings reset indentation
[(scene_heading) (section_heading)] @end
