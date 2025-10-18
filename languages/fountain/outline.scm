;; Outline/structure view for Fountain screenplays

;; Section headings (# ACT I, ## Opening)
;; Show section marker for context (e.g., "# ACT I" or "## Chapter 1")
(section_heading
  (section_start) @context
  (description) @name) @item

;; Scene headings (INT./EXT./etc.)
;; Show scene type prefix (e.g., "INT." or "EXT.") and location
(scene_heading
  (scene_start) @context
  (scene_location) @name) @item

;; Dialogue blocks - show character name
;; Creates an outline entry for each speaking character
;; Note: Zed determines nesting based on tree structure. Since Fountain has
;; a flat structure (all elements are siblings), the outline appears flat.
;; This still provides useful navigation: sections > scenes > characters.
(dialogue_block
  (character) @name) @item
