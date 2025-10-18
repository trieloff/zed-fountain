;; Outline/structure view for Fountain screenplays with hierarchical nesting

;; Section blocks (# ACT I, ## Opening)
;; These are top-level containers that hold scenes
(section_block
  (section_heading
    (section_start) @context
    (description) @name)) @item

;; Scene blocks (INT./EXT./etc. and forced scenes starting with .)
;; These are containers that hold dialogue and action
;; Will be nested under sections if they exist
(scene_block
  (scene_heading
    (scene_location) @name)) @item

;; Dialogue blocks - show character names
;; These will be nested under the scene they belong to
(dialogue_block
  (character) @name) @item
