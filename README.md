# Fountain Language Extension for Zed

This extension adds support for the [Fountain screenplay format](https://fountain.io/) to the [Zed editor](https://zed.dev/).

## Features

- Syntax highlighting for Fountain screenplays
- Bracket matching for notes `[[note]]` and parentheticals `(direction)`
- Toggle notes as block comments: `[[` `]]` (Cmd+/ wraps selection)
- Code structure/outline view showing sections, scenes, and characters
- Support for `.fountain` files
- Auto-indentation for dialogue blocks

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

- **Tree-sitter Grammar**: Uses [tree-sitter-fountain](https://github.com/gboere/tree-sitter-fountain)
- **Query Files**: Custom Tree-sitter queries for syntax highlighting, indentation, and structure
- **Language Configuration**: File associations and editor behavior

No custom Rust code is required - the extension works entirely through Tree-sitter integration.

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.

## License

This extension is released under the MIT License.

The tree-sitter grammar is provided by the [tree-sitter-fountain](https://github.com/gboere/tree-sitter-fountain) project.

## Related
- Prefer a concise, minimal variant? See the sibling project in `../zed-fountain-codex`.
