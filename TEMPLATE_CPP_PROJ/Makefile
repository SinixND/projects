# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 
# $(TARGET) depends on $(OBJS) to be build/linked; make looks for a rule to bulid $(OBJS)

CAT := $(if $(filter $(OS),Windows_NT),type,cat)

SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./build

INC_DIR := ./include
INC_SRC := $(INC_DIR)/inc_dirs.d
INC_DIR += $(shell $(CAT) $(INC_SRC))

LIB_DIR := ./lib
LD_FLAG := 
LIB_SRC := $(LIB_DIR)/lib_dirs.d
LD_SRC := $(LIB_DIR)/ld_flags.d
LIB_DIR += $(shell $(CAT) $(LIB_SRC))
LD_FLAG += $(shell $(CAT) $(LD_SRC))

CXX := clang++ #g++ 
TARGET := prog
SRC_EXT := cpp
OBJ_EXT := o
VPATH := $(SRC_DIR) $(INC_DIR) $(BIN_DIR) $(LIB_DIR) $(OBJ_DIR)

MAKEFLAGS := -j4
INC_FLAGS := $(addprefix -I,$(INC_DIR))
LIB_FLAGS := $(addprefix -L,$(LIB_DIR))
LD_FLAGS := $(addprefix -l,$(LD_FLAG))
CXX_FLAGS := -g -Wall -Wextra -ggdb -MMD -MP#-std=c++17

SRCS := $(wildcard */*.$(SRC_EXT))
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.$(SRC_EXT)=.$(OBJ_EXT)))

.PHONY: all build run clean cleanrun  

all: run

cleanrun: clean run

run: build
	$(BIN_DIR)/$(TARGET)

build: $(BIN_DIR)/$(TARGET)
# link command
$(BIN_DIR)/$(TARGET): $(OBJS)
	mkdir -p $(@D)
	$(CXX) -o $@ $^ $(INC_FLAGS) $(LIB_FLAGS) $(LD_FLAGS)

# compile command
$(OBJ_DIR)/%.$(OBJ_EXT): %.$(SRC_EXT) 
	mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) $(INC_FLAGS) -c $< -o $@ 


clean:  
	rm -rf $(BIN_DIR) $(OBJ_DIR)

