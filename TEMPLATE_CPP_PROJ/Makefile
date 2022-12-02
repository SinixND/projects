SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
INC_DIR := ./inc 
LIB_DIR := ./lib 
SRC_EXT := cpp
OBJ_EXT := o

INC_DIRS := $(addprefix -I,$(INC_DIR))
LIB_DIRS := $(addprefix -L,$(LIB_DIR))

LIB_FLAG := 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := g++ 
CXXFLAGS := -g -Wall #-std=c++17
BINARY := prog
SRCS := $(shell find . -name '*.$(SRC_EXT)')
#SRCS := $(wildcard */*.$(SRC_EXT))
SRC := $(shell find . -name '*.$(SRC_EXT)' -printf "%f ")
#OBJS := $(SRC:$(SRC_EXT)=$(OBJ_EXT))
OBJS := $(SRC:%.$(SRC_EXT)=$(OBJ_DIR)/%.$(OBJ_EXT))

# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 
# debug:
$(info $(SRCS))
$(info $(OBJS))
# $(BINARY) depends on $(OBJS) to be build/linked; make looks for a rule to bulid $(OBJS)

# link command
$(BIN_DIR)/$(BINARY) : $(OBJS)
	$(CXX) -o $@ $^ $(INC_DIRS) $(LIB_DIRS) $(LIB_FLAGS)
	@echo link command successful

# compile command
$(OBJS) : $(SRCS) 
	$(CXX) $(CXXFLAGS) $(INC_DIRS) -c $< -o $@ 
	@echo compile command successful

run: 
	$(BIN_DIR)/$(BINARY)

clean:
	#rm -f $(BIN_DIR)/* */*.$(OBJ_EXT)

