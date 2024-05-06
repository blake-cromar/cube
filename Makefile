# Compiler and flags
CC := g++
CFLAGS := -Wall -Wextra -Iinclude -Itest/include -std=c++11
LDFLAGS :=

# Targets
TARGET := cube
TEST_TARGET := test_cube

# Directories
SRCDIR := src
INCDIR := include
TEST_SRCDIR := test/src
OBJDIR := obj
TEST_OBJDIR := test/obj

# Source and object files
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
HEADERS := $(wildcard $(INCDIR)/*.hpp)
OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

TEST_SOURCES := $(wildcard $(TEST_SRCDIR)/*.cpp)
TEST_OBJECTS := $(patsubst $(TEST_SRCDIR)/%.cpp, $(TEST_OBJDIR)/%.o, $(TEST_SOURCES))

.PHONY: all clean

# Default rule
all: $(TARGET) $(TEST_TARGET)

# Build rules
$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

$(TEST_TARGET): $(TEST_OBJECTS) $(OBJDIR)/activation_functions.o | $(TEST_OBJDIR)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)/activation_functions.o: $(SRCDIR)/activation_functions.cpp $(INCDIR)/activation_functions.hpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_OBJDIR)/%.o: $(TEST_SRCDIR)/%.cpp $(INCDIR)/activation_functions.hpp | $(TEST_OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create directories if they don't exist
$(OBJDIR) $(TEST_OBJDIR):
	mkdir -p $@

# Run tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Clean up
clean:
	rm -rf $(OBJDIR) $(TEST_OBJDIR) $(TARGET) $(TEST_TARGET)
