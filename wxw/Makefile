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

INC_DIRS := $(addprefix -I,$(INC_DIR))
LIB_DIRS := $(addprefix -L,$(LIB_DIR)) \
			$(wx-config --libs)

LIB_FLAG := 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := g++ 
CXXFLAGS := -g -Wall \ #-std=c++17
			$(shell wx-config --cxxflags)
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

all: $(BIN_DIR)/$(BINARY)

# link command
$(BIN_DIR)/$(BINARY): $(OBJS)
	$(CXX) -o $@ $^ $(INC_DIRS) $(LIB_DIRS) $(LIB_FLAGS)
	@echo link command successful

# compile command
$(OBJ_DIR)/%.$(OBJ_EXT): %.$(SRC_EXT) 
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INC_DIRS) -c $< -o $@ 
	@echo compile command successful

run: 
	$(BIN_DIR)/$(BINARY)

clean:
	rm -rf $(BIN_DIR)/* $(OBJ_DIR)/*

.PHONY: all run clean
