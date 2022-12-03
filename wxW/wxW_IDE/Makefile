SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
INC_DIR := ./inc \
		   /usr/include/wx-3.2/ \
		   /usr/lib/wx/include/gtk3-unicode-3.2/
LIB_DIR := ./lib 
SRC_EXT := cpp
OBJ_EXT := o
VPATH := $(SRC_DIR) $(INC_DIR) $(BIN_DIR)
MAKEFLAGS := -j4

INC_DIRS := $(addprefix -I,$(INC_DIR))
LIB_DIRS := $(addprefix -L,$(LIB_DIR)) \
			`wx-config --libs all`

LIB_FLAG := 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := clang++ #g++ 
CXXFLAGS := -g -Wall -Wextra -ggdb -MMD -MP \
			`wx-config --cxxflags`

BINARY := prog
SRCS := $(wildcard */*.$(SRC_EXT))
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.$(SRC_EXT)=.$(OBJ_EXT)))

# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 
# debug:
$(info $(SRCS))
$(info $(OBJS))
# $(BINARY) depends on $(OBJS) to be build/linked; make looks for a rule to bulid $(OBJS)

.PHONY: all build run clean cleanrun  

all: run

cleanrun: clean run

run: build
	$(BIN_DIR)/$(BINARY)

build: $(BIN_DIR)/$(BINARY)
# link command
$(BIN_DIR)/$(BINARY): $(OBJS)
	$(CXX) -o $@ $^ $(INC_DIRS) $(LIB_DIRS) $(LIB_FLAGS)
	@echo link command successful

# compile command
$(OBJ_DIR)/%.$(OBJ_EXT): %.$(SRC_EXT) 
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INC_DIRS) -c $< -o $@ 
	@echo compile command successful


clean:  
	rm -rf $(BIN_DIR)/* $(OBJ_DIR)/*

