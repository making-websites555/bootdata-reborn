# File: Makefile

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

# Project directories
SRC_DIR = src
INC_DIR = include
UTILS_DIR = utils

# Source files and object files
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/Bootloader.cpp $(SRC_DIR)/Manager.cpp $(UTILS_DIR)/Logger.cpp
OBJS = $(SRCS:.cpp=.o)

# Output binary
TARGET = bootloader_manager

# Default rule to build the target
all: $(TARGET)

# Rule to link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -I$(UTILS_DIR) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Rule to remove the executable
cleanall: clean
	rm -f $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Rule to display a simple help message
help:
	@echo "Makefile commands:"
	@echo "  make        - Build the project"
	@echo "  make clean  - Remove object files and executable"
	@echo "  make run    - Run the executable"
	@echo "  make help   - Show this help message"

