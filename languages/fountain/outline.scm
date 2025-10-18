;; Outline/structure view for Fountain screenplays

;; Section headings (# HEADING)
;; Show section marker for context (e.g., "# ACT I" or "## Chapter 1")
(section_heading
  (section_start) @context
  (description) @name) @item

;; Scene headings (INT./EXT./etc.)
;; Show scene type prefix (e.g., "INT." or "EXT.") and location
(scene_heading
  (scene_start) @context
  (scene_location) @name) @item
