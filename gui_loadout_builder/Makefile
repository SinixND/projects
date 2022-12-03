# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 
# $(TARGET) depends on $(OBJ_FILES) to be build/linked; make looks for a rule to bulid $(OBJ_FILES)

CXX := clang++ #g++ 
TARGET := prog
SRC_EXT := cpp
OBJ_EXT := o
CAT := $(if $(filter $(OS),Windows_NT),type,cat)

SRC_DIR := ./src
BIN_DIR := ./bin
CONF_DIR := ./conf
INC_DIR := ./include /usr/include/wx-3.2/ /usr/lib/wx/include/gtk3-unicode-3.2/
LIB_DIR := ./lib
OBJ_DIR := ./build

MAKEFLAGS := -j4
CXX_FLAGS := -g -Wall -Wextra -ggdb -MMD -MP
LD_FLAG := 

VPATH := $(SRC_DIR) $(INC_DIR) $(BIN_DIR) $(LIB_DIR) $(OBJ_DIR) $(CONF_DIR)

INC_FLAGS := $(addprefix -I,$(INC_DIR))
CXX_FLAGS += $(INC_FLAGS) \
			 `wx-config --cxxflags`
LIB_FLAGS := $(addprefix -L,$(LIB_DIR)) \
			 `wx-config --libs all`
LD_FLAGS := $(addprefix -l,$(LD_FLAG))

SRC_FILES := $(wildcard */*.$(SRC_EXT))
OBJ_FILES := $(addprefix $(OBJ_DIR)/,$(SRC_FILES:.$(SRC_EXT)=.$(OBJ_EXT)))

.PHONY: all build run clean cleanrun  

all: run

cleanrun: clean run

run: build
	$(BIN_DIR)/$(TARGET)

build: $(BIN_DIR)/$(TARGET)
# link command
$(BIN_DIR)/$(TARGET): $(OBJ_FILES)
	mkdir -p $(@D)
	$(CXX) -o $@ $^ $(LIB_FLAGS) $(LD_FLAGS) #$(INC_FLAGS)

# compile command
$(OBJ_DIR)/%.$(OBJ_EXT): %.$(SRC_EXT)
	mkdir -p $(@D)
	$(CXX) $(CXX_FLAGS) $(INC_FLAGS) -c $< -o $@ #$(INC_FLAGS)


clean:  
	rm -rf $(BIN_DIR) $(OBJ_DIR)

