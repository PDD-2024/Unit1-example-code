# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Werror

# Directories
SRC_DIR = geometry
BUILD_DIR = build

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Target executable
TARGET = main

.PHONY: show
show:
	@echo "SRCS: $(SRCS)"
	@echo "OBJS: $(OBJS)"

# Default target
all: $(TARGET)

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	@echo "Building $@ from $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR)/$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into target executable
$(TARGET): $(OBJS) $(BUILD_DIR)/$(TARGET).o
	@echo "Linking $@ from $^"
	$(CC) $(CFLAGS) $^ -o $@

# Clean build directory
clean:
	rm -rf $(BUILD_DIR)

# Clean build directory and target executable
distclean: clean
	rm -f $(TARGET)

cleanall: clean distclean
