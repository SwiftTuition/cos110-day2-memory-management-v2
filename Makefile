# Makefile for COS110 Day 2 Memory Management Project
# Swift Tuition - Gintoki's Memory Crisis

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -g
SRCDIR = src
TESTDIR = tests
SOLDIR = solution

# Color codes for output
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
NC = \033[0m # No Color

.PHONY: all run test solution memory-check clean help

# Default target
all: help

# Compile and run student implementation
run:
	@echo "$(CYAN)🍭 Compiling Gintoki's Memory Management Training...$(NC)"
	@$(CXX) $(CXXFLAGS) -o main $(SRCDIR)/main.cpp $(SRCDIR)/functions.cpp
	@echo "$(GREEN)✅ Compilation successful!$(NC)"
	@echo "$(YELLOW)🎯 Running your implementation:$(NC)"
	@echo "$(BLUE)==========================================$(NC)"
	@./main
	@echo "$(BLUE)==========================================$(NC)"

# Run basic functionality tests
test: test-basic test-memory
	@echo "$(PURPLE)📊 All tests completed!$(NC)"

test-basic:
	@echo "$(CYAN)🧪 Running Basic Implementation Tests...$(NC)"
	@$(CXX) $(CXXFLAGS) -o test_basic $(SRCDIR)/functions.cpp $(TESTDIR)/test_basic.cpp
	@./test_basic

test-memory:
	@echo "$(CYAN)🔍 Running Memory Management Tests...$(NC)"
	@$(CXX) $(CXXFLAGS) -o test_memory $(SRCDIR)/functions.cpp $(TESTDIR)/test_memory.cpp
	@./test_memory

# Show complete solution in action
solution:
	@echo "$(YELLOW)⭐ Gintoki's Complete Solution Demo$(NC)"
	@echo "$(YELLOW)====================================$(NC)"
	@echo "$(CYAN)Compiling solution...$(NC)"
	@$(CXX) $(CXXFLAGS) -o solution_demo $(SOLDIR)/main.cpp
	@echo "$(GREEN)✅ Solution compiled successfully!$(NC)"
	@echo "$(YELLOW)🎯 Running complete solution:$(NC)"
	@echo "$(BLUE)==========================================$(NC)"
	@./solution_demo
	@echo "$(BLUE)==========================================$(NC)"
	@echo "$(PURPLE)💡 This is how your program should behave when complete!$(NC)"

# Check for memory leaks using Valgrind
memory-check:
	@echo "$(CYAN)🔍 Checking for Memory Leaks with Valgrind...$(NC)"
	@if command -v valgrind >/dev/null 2>&1; then \
		$(CXX) $(CXXFLAGS) -o main_debug $(SRCDIR)/main.cpp $(SRCDIR)/functions.cpp; \
		echo "$(YELLOW)Running Valgrind analysis...$(NC)"; \
		valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main_debug; \
	else \
		echo "$(RED)❌ Valgrind not installed. Install with: sudo apt-get install valgrind$(NC)"; \
		echo "$(YELLOW)💡 Running basic memory stress test instead...$(NC)"; \
		$(CXX) $(CXXFLAGS) -o test_memory $(SRCDIR)/functions.cpp $(TESTDIR)/test_memory.cpp; \
		./test_memory; \
	fi

# Clean up compiled files
clean:
	@echo "$(CYAN)🧹 Cleaning up compiled files...$(NC)"
	@rm -f main test_basic test_memory solution_demo main_debug
	@echo "$(GREEN)✅ Cleanup complete!$(NC)"

# Show available commands
help:
	@echo "$(PURPLE)🍭 Gintoki's Memory Management Training$(NC)"
	@echo "$(PURPLE)=======================================$(NC)"
	@echo ""
	@echo "$(CYAN)Available commands:$(NC)"
	@echo "  $(YELLOW)make run$(NC)         - Compile and run your implementation"
	@echo "  $(YELLOW)make test$(NC)        - Run all tests (basic + memory)"
	@echo "  $(YELLOW)make solution$(NC)    - Show complete solution demo"
	@echo "  $(YELLOW)make memory-check$(NC) - Check for memory leaks with Valgrind"
	@echo "  $(YELLOW)make clean$(NC)       - Remove compiled files"
	@echo "  $(YELLOW)make help$(NC)        - Show this help message"
	@echo ""
	@echo "$(BLUE)🎯 Learning Focus: Day 1+2 Material Only$(NC)"
	@echo "  ✅ Basic pointers and pointer arithmetic"
	@echo "  ✅ Dynamic memory allocation (new/delete)"
	@echo "  ✅ Dynamic arrays (new[]/delete[])"
	@echo "  ✅ C-style string manipulation"
	@echo "  ❌ No classes, constructors, or OOP concepts"
	@echo ""
	@echo "$(GREEN)💡 Start with 'make run' to test your implementation!$(NC)"
	@echo "$(GREEN)💡 Use 'make solution' to see the expected behavior!$(NC)"