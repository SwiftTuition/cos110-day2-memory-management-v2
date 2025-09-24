# 🍭 COS110 Day 2 - Memory Management Training

> **Gintoki's Memory Crisis!** - Master the fundamentals of C++ dynamic memory without the fancy stuff.

## Quick Start

### 🚀 GitHub Codespaces (Recommended)
[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/SwiftTuition/cos110-day2-memory-management)

1. Click the button above or go to the repository
2. Click "Code" → "Codespaces" → "Create codespace"
3. Wait for setup to complete (~2 minutes)
4. Run `make help` to see available commands

### 💻 Local Development
```bash
# Clone the repository
git clone https://github.com/SwiftTuition/cos110-day2-memory-management.git
cd cos110-day2-memory-management

# Compile and run
make run

# Run tests
make test

# See the solution
make solution
```

## 🎯 Learning Objectives

Master these Day 1+2 fundamentals:
- ✅ Dynamic memory allocation (`new` and `delete`)
- ✅ Dynamic arrays (`new[]` and `delete[]`)
- ✅ Pointer arithmetic and array traversal
- ✅ Memory leak prevention
- ✅ C-style string manipulation

## 🚨 Important Constraints

**What you CAN use:**
- Basic variables (`int`, `char`, `double`)
- Pointers (`int*`, `char*`, etc.)
- Dynamic allocation (`new`, `delete`, `new[]`, `delete[]`)
- Simple functions and control structures
- Pointer arithmetic

**What you CANNOT use:**
- Classes and objects (Day 3+)
- Constructors and destructors (Day 3+)
- References as parameters (Day 3+)
- STL containers (`vector`, `string`, etc.)

## 📝 Your Mission

Complete the functions in `src/main.cpp`:

### Integer Array Functions
- `createDynamicArray(int size)` - Allocate array memory
- `populateArray(int* arr, int size)` - Fill with values 1,2,3...
- `findMaximum(int* arr, int size)` - Find largest value
- `calculateAverage(int* arr, int size)` - Calculate mean
- `destroyArray(int* arr)` - Clean up memory

### String Management Functions
- `createDynamicString(int maxLength)` - Allocate string buffer
- `copyString(char* dest, const char* src)` - Manual string copy
- `getStringLength(const char* str)` - Count characters
- `destroyString(char* str)` - Clean up string memory

## 🛠️ Available Commands

```bash
make run          # Compile and run your implementation
make test         # Run all tests (basic + memory)
make solution     # Show complete solution demo
make memory-check # Check for memory leaks with Valgrind
make clean        # Remove compiled files
make help         # Show command reference
```

## 🎌 Project Structure

```
├── src/
│   ├── functions.h        # Function declarations
│   ├── functions.cpp      # Your implementation (edit this!)
│   └── main.cpp           # Main program with guided exercises
├── solution/
│   └── main.cpp           # Complete solution (reference)
├── tests/
│   ├── test_basic.cpp     # Basic functionality tests
│   └── test_memory.cpp    # Memory management tests
├── .devcontainer/         # GitHub Codespaces configuration
│   └── README.md          # Detailed AI setup guide
└── Makefile              # Build system with colored output
```

## 🤖 AI Assistant Setup - For Dummies Guide

The Gemini CLI **tool gets installed automatically**, but you need to **authenticate it** with your personal API key.

### 📋 GitHub Codespaces (Recommended)

**Step 1: Get Your API Key**
1. Open [Google AI Studio](https://makersuite.google.com/app/apikey) in a new tab
2. Click the blue "**Get API key**" button
3. Click "**Create API key in new project**" (or select existing project)
4. **Copy the API key** (looks like: `AIzaSyC1234...`)
5. **Keep this tab open** - you'll need the key in Step 2

**Step 2: Add Secret to GitHub Repository**
1. Go to **THIS repository** on GitHub (where you found this project)
2. Click "**Settings**" tab (top of the page)
3. In left sidebar: "**Secrets and variables**" → "**Codespaces**"
4. Click green "**New repository secret**" button
5. Name: `GEMINI_API_KEY` (exactly like this)
6. Value: **Paste your API key** from Step 1
7. Click "**Add secret**"

**Step 3: Open Codespace**
1. Go back to repository main page
2. Click green "**Code**" button → "**Codespaces**" tab
3. Click "**Create codespace on main**"
4. **Wait 2-3 minutes** for setup (tools + Gemini extension install automatically)

**Step 4: Authenticate CLI**
1. Once Codespace loads, open **Terminal** (bottom panel)
2. Type: `gemini auth $GEMINI_API_KEY`
3. Press Enter
4. **A URL will appear** - click on it (or copy-paste into new browser tab)
5. **Sign in with your Google account** and authorize the application
6. **Copy the authorization code** from the browser
7. **Paste the code** into the terminal and press Enter
8. You should see: `Loaded cached credentials. Got it. I'm ready.`

**Step 5: Test It Works**
```bash
gemini prompt "What is a memory leak in C++?"
```

### 🖥️ Local Setup (WSL2/Linux Students)

**Step 1: Get Your API Key** (Same as above)
1. Open [Google AI Studio](https://makersuite.google.com/app/apikey)
2. Click "**Get API key**" → "**Create API key in new project**"
3. **Copy the API key** and save it somewhere safe

**Step 2: Install Required Tools**
```bash
# Update your system
sudo apt-get update

# Install C++ development tools
sudo apt-get install -y build-essential g++ make valgrind gdb

# Install Node.js (required for Gemini CLI)
curl -fsSL https://deb.nodesource.com/setup_20.x | sudo -E bash -
sudo apt-get install -y nodejs

# Install Gemini CLI
npm install -g @google/gemini-cli
```

**Step 3: Clone and Setup Project**
```bash
# Clone the repository
git clone https://github.com/SwiftTuition/cos110-day2-memory-management.git
cd cos110-day2-memory-management
```

**Step 4: Authenticate Gemini CLI**
```bash
# Replace YOUR_API_KEY_HERE with your actual API key
gemini auth YOUR_API_KEY_HERE
```
**Note**: You'll be prompted to:
1. Visit a Google authorization URL in your browser
2. Sign in and authorize the application
3. Copy the authorization code back to terminal
4. Success message: `Loaded cached credentials. Got it. I'm ready.`

**Step 5: Test Everything**
```bash
# Test C++ compilation
make help

# Test AI assistant
gemini prompt "What is a memory leak in C++?"
```

### 🆘 Troubleshooting

**"Command not found: gemini"**
- In Codespaces: Wait for setup to finish completely
- If still fails: Install "Gemini CLI Companion" extension from VS Code marketplace
- Locally: Run `npm install -g @google/gemini-cli`

**"No installer available for GitHub Codespaces"**
- The Gemini CLI Companion extension should auto-install
- If not: Go to Extensions panel → Search "Gemini CLI Companion" → Install

**"Authentication failed"**
- Double-check your API key at [Google AI Studio](https://makersuite.google.com/app/apikey)
- For Codespaces: Make sure you added `GEMINI_API_KEY` as repository secret
- For Local: Make sure you used your actual API key (not `$GEMINI_API_KEY`)

**API key shows as empty (`$GEMINI_API_KEY` not found)**
- This only works in Codespaces after adding the repository secret
- Locally, replace `$GEMINI_API_KEY` with your actual key

---

**Need Help?**
- Course Questions: admin@swifttuition.co.za
- Technical Issues: christian@swifttuition.co.za
- Community: [WhatsApp Group](https://chat.whatsapp.com/HH45aFDchGRByVpdIwHtsj)

## ⚠️ Common Mistakes to Avoid

1. **Memory Leaks**: Every `new` needs a `delete`, every `new[]` needs a `delete[]`
2. **Dangling Pointers**: Don't use pointers after calling `delete`
3. **Array vs Single**: Use `new[]`/`delete[]` for arrays, `new`/`delete` for single objects
4. **Null Checks**: Always check if allocation succeeded before using
5. **Buffer Overflows**: Don't write past allocated memory boundaries

## 🎯 Success Criteria

- ✅ All functions compile without errors
- ✅ Basic tests pass (`make test`)
- ✅ No memory leaks (`make memory-check`)
- ✅ Program runs without crashes
- ✅ Clean, readable code with comments

## 📞 Support

- **Course Questions**: admin@swifttuition.co.za
- **Technical Issues**: christian@swifttuition.co.za
- **Community**: [WhatsApp Group](https://chat.whatsapp.com/HH45aFDchGRByVpdIwHtsj)

## 📚 Learning Resources

- Check `docs/STORY.md` for the full Gintama-style learning story
- Review Day 1 pointer basics if needed
- Focus on understanding each concept before moving forward

---

**Remember**: This is about building solid fundamentals, not fancy programming tricks. Master these basics and everything else will be much easier!

*© Swift Tuition - Making C++ Fun Since 2024*