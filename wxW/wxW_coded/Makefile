SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./build
INC_DIR := ./include
LIB_DIR := ./lib 
SRC_EXT := cpp
OBJ_EXT := o
VPATH := $(SRC_DIR) $(INC_DIR) $(BIN_DIR) $(LIB_DIR) $(OBJ_DIR)
MAKEFLAGS := -j4

INC_DIRS := $(addprefix -I,$(INC_DIR))
LIB_DIRS := $(addprefix -L,$(LIB_DIR))

LIB_FLAG := 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := clang++ #g++ 
CXXFLAGS := -g -Wall -Wextra -ggdb -MMD -MP#-std=c++17
TARGET := prog
SRCS := $(wildcard */*.$(SRC_EXT))
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.$(SRC_EXT)=.$(OBJ_EXT)))

# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 
# $(TARGET) depends on $(OBJS) to be build/linked; make looks for a rule to bulid $(OBJS)

.PHONY: all build run clean cleanrun  

all: run

cleanrun: clean run

run: build
	$(BIN_DIR)/$(TARGET)

build: $(BIN_DIR)/$(TARGET)
# link command
$(BIN_DIR)/$(TARGET): $(OBJS)
	mkdir -p $(@D)
	$(CXX) -o $@ $^ $(INC_DIRS) $(LIB_DIRS) $(LIB_FLAGS)

# compile command
$(OBJ_DIR)/%.$(OBJ_EXT): %.$(SRC_EXT) 
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INC_DIRS) -c $< -o $@ 


clean:  
	rm -rf $(BIN_DIR) $(OBJ_DIR)

