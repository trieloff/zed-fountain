# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a Zed editor extension providing comprehensive language support for the Fountain screenplay format. It's a **pure Tree-sitter integration** with no custom Rust code—all functionality is achieved through declarative configuration and Tree-sitter query files (.scm).

## Architecture

### Repository Structure

This extension follows a split-repository pattern:

1. **Extension repository** (this repo - `zed-fountain`):
   - `extension.toml` - Points to grammar via git URL and commit hash
   - `languages/fountain/` - Query files (.scm) and language configuration
   - `grammars/fountain/` - Checked-out copy of grammar (may be stale, use sibling for edits)

2. **Grammar repository** (separate repo - `tree-sitter-fountain`):
   - **Location**: Should be checked out as a **sibling directory** to `zed-fountain`
   - Repository: https://github.com/trieloff/tree-sitter-fountain
   - Contains `grammar.js` and the grammar implementation
   - Has its own test suite in `test/fixtures/`

**Workflow**: Make grammar changes in the sibling `tree-sitter-fountain` repo, commit/push them, then update `extension.toml` in this repo with the new commit hash.

### Key Files

- `extension.toml` - Points to grammar via git repository URL and commit hash (rev field)
- `languages/fountain/config.toml` - File associations, brackets, comment styles
- `languages/fountain/highlights.scm` - Syntax highlighting capture queries
- `languages/fountain/outline.scm` - Hierarchical outline view (sections → scenes → dialogue)
- `languages/fountain/indents.scm` - Auto-indentation rules for dialogue
- `languages/fountain/brackets.scm` - Special brackets: `[[ ]]` for notes, `( )` for parentheticals

## Development Commands

### Testing the Extension in Zed

1. **Install as dev extension**:
   - Open Zed
   - Extensions menu → "Install Dev Extension"
   - Select the `zed-fountain` root directory

2. **Test with example file**:
   - Open `example.fountain` or `brick-and-steel.fountain`
   - Verify syntax highlighting, outline view, indentation

3. **Reload after changes**:
   - Make changes to .scm files or config.toml
   - Restart Zed or reload the extension to see changes

### Working with the Tree-sitter Grammar

The grammar lives in `grammars/fountain/` and uses standard tree-sitter tooling:

```bash
cd grammars/fountain

# Generate parser from grammar.js
tree-sitter generate

# Run grammar tests
tree-sitter test

# Or use npm scripts
npm run build           # Same as tree-sitter generate
npm run test:tree-sitter  # Same as tree-sitter test
npm test                # Run node-based parser tests

# Parse a file to see AST
tree-sitter parse ../../example.fountain

# Build WASM for web environments
npm run build-wasm
```

### Updating the Grammar

**IMPORTANT**: The grammar source repository should be checked out as a sibling directory to this extension:

```
Parent Directory/
├── zed-fountain/           # This extension
└── tree-sitter-fountain/   # Grammar source (sibling)
```

When making grammar changes:

1. **Check for or clone the grammar repo**:
   ```bash
   # From zed-fountain directory
   cd ..

   # Check if it exists
   if [ ! -d "tree-sitter-fountain" ]; then
       git clone https://github.com/trieloff/tree-sitter-fountain
   fi

   cd tree-sitter-fountain
   ```

2. **Make grammar changes** in `grammar.js`

3. **Generate and test**:
   ```bash
   tree-sitter generate
   tree-sitter test
   ```

4. **Commit and push grammar changes**:
   ```bash
   git add .
   git commit -m "Description of grammar changes"
   git push origin main
   ```

5. **Get the full commit hash**:
   ```bash
   git rev-parse HEAD
   # Copy the full 40-character hash
   ```

6. **Update the extension** (back in zed-fountain):
   ```bash
   cd ../zed-fountain
   ```
   - Update `extension.toml` with the new `rev` hash (full 40-character SHA)
   - **Bump the version** in `extension.toml` (e.g., 0.14.0 → 0.14.1 for grammar fixes, 0.14.0 → 0.15.0 for new features)

7. **Commit extension update**:
   ```bash
   git add extension.toml
   git commit -m "Update to tree-sitter-fountain [hash]"
   git push
   ```

## Tree-sitter Query Files

All `.scm` files use Tree-sitter's S-expression query language. The grammar defines these node types:

- `section_heading` - Act/sequence markers (# ## ###)
- `scene_heading` - Location/time (INT./EXT./etc.)
- `forced_scene_heading` - Forced scenes (.HEADING)
- `character` - Character names
- `dialogue_block` - Character + dialogue grouping
- `dialogue` - Spoken lines
- `parenthetical` - Actor directions (wryly)
- `action` - Scene description
- `transition` - CUT TO:, FADE OUT:, etc.
- `note` - Production notes [[like this]]
- `boneyard` - Commented-out content /* */
- `synopsis` - Scene summaries = text
- `centered_text` - >centered<
- `lyrics` - ~lyrics

### Syntax Highlighting Strategy

The highlights.scm file maps Fountain elements to semantic tokens:

- Scene/Section headings → `@markup.heading.1` (primary heading style)
- Character names → `@markup.heading.2` (secondary heading)
- Dialogue → `@string`
- Parentheticals → `@markup.italic`
- Transitions → `@keyword`
- Notes → `@comment` (muted)
- Action → `@text` (default)

### Outline Hierarchy

The outline.scm provides hierarchical navigation:
- Sections (# ACT I) nest scenes
- Scenes (INT. MANSION) nest dialogue
- Character cues appear under their scenes

This is achieved through Tree-sitter's hierarchical parsing where section_block and scene_block nodes contain their children.

## Fountain Specification Compliance

The extension implements the full Fountain 1.1 spec from https://fountain.io/:
- Standard scene headings (INT./EXT./INT./EXT./EST.)
- Forced elements (. prefix for scenes, > prefix for transitions)
- Dual dialogue (^ marker)
- Title page metadata
- All text formatting (bold ****, italic *, underline _)

## Common Pitfalls

- **Grammar changes don't appear**: Must commit and push grammar changes to tree-sitter-fountain repo, then update the `rev` field in extension.toml with the new commit hash
- **Can't find grammar source**: The tree-sitter-fountain repo should be checked out as a sibling directory to zed-fountain, not within it
- **Forgot to bump version**: Every change requires incrementing the version in extension.toml
- **Query errors**: Verify node names match what's in `grammar.js` (not all parser nodes are named nodes)
- **Indentation not working**: Check indents.scm uses `@indent` and `@dedent` captures correctly
- **Outline not hierarchical**: Requires grammar to use block nodes (section_block, scene_block) that contain children
- **Using short commit hash**: The `rev` field in extension.toml requires the full 40-character SHA-1 hash, not the short 7-character version

## File Naming in Zed Extensions

Zed expects specific file names in `languages/fountain/`:
- `config.toml` (required) - language configuration
- `highlights.scm` (optional) - syntax highlighting
- `outline.scm` (optional) - outline/structure view
- `indents.scm` (optional) - indentation rules
- `brackets.scm` (optional) - bracket matching
- `injections.scm` (optional) - embedded languages
- `textobjects.scm` (optional) - Vim text objects

## Version Management

**CRITICAL**: Every change to the extension requires a version bump in `extension.toml`.

### Semantic Versioning

Follow semantic versioning (MAJOR.MINOR.PATCH):

- **PATCH** (0.14.0 → 0.14.1): Bug fixes, grammar fixes, minor query improvements
- **MINOR** (0.14.0 → 0.15.0): New features, new Fountain element support, significant enhancements
- **MAJOR** (0.14.0 → 1.0.0): Breaking changes, major architectural changes

### Changes That Require Version Bumps

- Grammar updates (update `rev` hash AND version)
- Query file changes (.scm files)
- Config changes (config.toml)
- Any functional change to the extension

### Version Bump Checklist

1. Edit `extension.toml`, increment version field
2. Commit: `git commit -am "Bump version to X.Y.Z"`
3. Tag: `git tag vX.Y.Z`
4. Push: `git push && git push --tags`

## Publishing Workflow

1. Ensure version is bumped in `extension.toml`
2. Test thoroughly with real screenplay files
3. Commit and tag: `git tag v0.x.x`
4. Push to GitHub: `git push && git push --tags`
5. Submit to Zed extensions gallery (when available)
