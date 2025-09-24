# 🤖 GitHub Codespaces Setup Guide

This guide explains how to set up the Google Gemini AI assistant in GitHub Codespaces.

## Automatic Setup

When you open this repository in GitHub Codespaces, the following will be automatically installed:
- C++ development tools (g++, make, valgrind, gdb)
- Node.js and npm (latest versions)
- Google Gemini CLI

## Setting Up AI Assistant

### Step 1: Get Your Google AI API Key

1. Visit [Google AI Studio](https://makersuite.google.com/app/apikey)
2. Click "Get API key" to generate a new key
3. **Copy the API key** (you'll need it in the next step)

### Step 2: Add API Key as Repository Secret

**Important**: Never paste your API key directly in the terminal or save it in files!

1. Go to your **GitHub repository** (this one)
2. Click **Settings** → **Secrets and variables** → **Codespaces**
3. Click **New repository secret**
4. Name: `GEMINI_API_KEY`
5. Value: Paste your copied API key
6. Click **Add secret**

### Step 3: Authenticate in Codespaces

After your Codespace is built:

1. Open a new terminal
2. Run the authentication command:
   ```bash
   gemini auth $GEMINI_API_KEY
   ```

### Step 4: Test the Setup

Verify everything works:
```bash
gemini prompt "What is a C++ memory leak?"
```

## Using the AI Assistant

The Gemini CLI will help guide your learning but won't give direct answers. Try these commands:

```bash
# Ask for help understanding concepts
gemini prompt "Explain pointer arithmetic in simple terms"

# Get debugging guidance
gemini prompt "My program has a segmentation fault. What should I check?"

# Ask for learning tips
gemini prompt "What are common mistakes with dynamic memory in C++?"
```

## Troubleshooting

### "Command not found: gemini"
- Wait for the Codespace to finish building
- Try running: `npm install -g @google/gemini-cli`

### "Authentication failed"
- Check that `GEMINI_API_KEY` is set as a repository secret
- Verify the API key is valid at [Google AI Studio](https://makersuite.google.com/app/apikey)
- Try running `echo $GEMINI_API_KEY` to see if the environment variable is available

### API Key Not Available
- The API key is only available after adding it as a repository secret
- You may need to rebuild the Codespace: **Ctrl+Shift+P** → "Codespaces: Rebuild Container"

---

*For course questions: admin@swifttuition.co.za*