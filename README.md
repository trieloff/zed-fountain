# Fountain Language Extension for Zed

This extension adds comprehensive support for the [Fountain screenplay format](https://fountain.io/) to the [Zed editor](https://zed.dev/).

![Fountain Outline View](https://raw.githubusercontent.com/trieloff/zed-fountain/main/screenshot.png)

## Features

### 📝 Complete Fountain Syntax Support

- **Scene Headings** - Full support for standard (INT./EXT./etc.) and forced scene headings (`.HEADING`)
- **Section Headings** - Hierarchical sections with `#` markers (# ACT I, ## Opening Scene)
- **Character Names** - Uppercase character cues with dual dialogue support (`^`)
- **Dialogue** - Character speech with proper formatting
- **Parentheticals** - Actor directions `(wryly)` within dialogue
- **Action Lines** - Scene description and narrative prose
- **Transitions** - Scene transitions (CUT TO:, FADE OUT:, etc.)
- **Notes** - Production notes `[[like this]]`
- **Boneyard** - Commented-out content `/* like this */`
- **Synopses** - Scene summaries `= Summary text`
- **Centered Text** - `>Centered text<`
- **Lyrics** - Song lyrics `~lyrics here`
- **Page Breaks** - `===` markers
- **Title Page** - Multi-field title page support with continuation lines
- **Emphasis** - Bold `**text**`, italic `*text*`, underline `_text_`, and bold-italic `***text***`

### 🎨 Intelligent Syntax Highlighting

- Scene locations and times are distinctly colored
- Scene numbers are highlighted
- Uppercase keywords in action lines (props, sounds) are emphasized
- Character mentions in action are highlighted
- Different colors for different element types (headings, dialogue, action)
- Emphasis markers (bold/italic) are styled appropriately

### 🗂️ Hierarchical Outline View

- **Sections** appear as top-level items (# ACT I)
  - **Subsections** nest under sections (## Opening Image)
    - **Scenes** nest under sections (INT. MANSION - DAY, .SNIPER SCOPE POV)
      - **Character dialogue** nests under scenes
- Navigate your entire screenplay structure at a glance
- Click any item to jump to that location in your script

### 📐 Smart Indentation

- Dialogue blocks are automatically indented
- Scene and section headings reset indentation
- Proper formatting preserved during editing

### 🔧 Editor Integration

- Bracket matching for notes `[[` `]]` and parentheticals `(` `)`
- Block comment toggling (Cmd+/ or Ctrl+/) wraps selection in `[[` `]]`
- `.fountain` file type association
- Spell checking enabled for action and dialogue

## Installation

### From Extensions Gallery (Coming Soon)

Once published, you can install this extension directly from Zed's extension gallery:

1. Open Zed
2. Go to Extensions (Cmd+Shift+X / Ctrl+Shift+X)
3. Search for "Fountain"
4. Click Install

### Development Installation

To install this extension locally for development:

1. Clone this repository
2. Open Zed
3. Go to Extensions
4. Click "Install Dev Extension"
5. Select the `zed-fountain` directory

## Supported File Types

- `.fountain` - Fountain screenplay files

## Language Features

### Syntax Highlighting

The extension provides comprehensive syntax highlighting for:

- **Scene Headings** - INT./EXT./INT./EXT./EST. lines
- **Section Headings** - Lines starting with `#`
- **Character Names** - Uppercase character cues
- **Dialogue** - Character speech
- **Parentheticals** - Actor directions in parentheses
- **Action** - Scene description and action lines
- **Transitions** - Scene transitions (e.g., CUT TO:)
- **Notes** - Production notes in double brackets `[[note]]`

### Code Structure

The extension provides an outline view that shows:

- Section headings
- Scene headings
- Character cues (for navigation)
- Transitions

### Bracket Matching

Automatic bracket matching is provided for:

- Notes: `[[` and `]]`
- Parentheticals: `(` and `)`

## About Fountain

Fountain is a simple markup syntax for writing, editing and sharing screenplays in plain, human-readable text. Fountain allows you to work on your screenplay anywhere, on any computer or tablet, using any software that edits text files.

Learn more at [fountain.io](https://fountain.io/).

## Architecture

This is a pure Tree-sitter language extension that provides language support through:

- **Tree-sitter Grammar**: Uses [tree-sitter-fountain](https://github.com/trieloff/tree-sitter-fountain) with hierarchical parsing for proper outline nesting
- **Query Files**: Custom Tree-sitter queries for:
  - `highlights.scm` - Syntax highlighting with full Fountain element support
  - `outline.scm` - Hierarchical code structure (sections → scenes → dialogue)
  - `indents.scm` - Smart indentation rules
  - `brackets.scm` - Bracket matching for notes and parentheticals
- **Language Configuration**: File associations and editor behavior

No custom Rust code is required - the extension works entirely through Tree-sitter integration.

### Grammar Features

The tree-sitter grammar provides:
- **Hierarchical AST**: Section blocks contain scene blocks, scene blocks contain dialogue/action
- **All Fountain Spec Elements**: Complete implementation of the Fountain 1.1 specification
- **Forced Elements**: Support for forced scene headings (`.HEADING`), transitions (`>TRANSITION`), etc.
- **Dual Dialogue**: Character cues with `^` marker
- **Title Page**: Multi-line fields with continuation support

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.

## License

This extension is released under the MIT License.

The tree-sitter grammar is based on [tree-sitter-fountain](https://github.com/gboere/tree-sitter-fountain) with enhancements for hierarchical parsing.
