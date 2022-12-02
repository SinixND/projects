SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
INC_DIR := ./inc \
	/usr/include/wx-3.2/ \
	/usr/lib/wx/include/gtk3-unicode-3.2/
INC_DIRS := $(addprefix -I,$(INC_DIR))

LIB_DIR := ./lib 
LIB_DIRS := $(addprefix -L,$(LIB_DIR)) \
			$(wx-config --libs)
LIB_FLAG := 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := g++ 
CXXFLAGS := -g -Wall -std=c++17 \
			$(shell wx-config --cxxflags)
EXEC := prog
SRC := $(wildcard */*.cpp) 
OBJS := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

.PHONY: all

all: ${EXEC}

# $@(target, left of :) \
	$< (first prerequesite, first right of :) \
	$^ (all prerequesites, all right of :) 

# link command
${EXEC} : ${OBJS}
	${CXX} -o $(BIN_DIR)/$@ $^ $(INC_DIRS) $(LIB_DIRS) $(LIB_FLAGS)

# compile command
#$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
#	${CXX} ${CXXFLAGS} $(INC_DIRS) -c $< -o $@ 
	#evtl. -c $^ instead of $<

run: 
	$(BIN_DIR)/$(EXEC)

clean:
	rm -f $(BIN_DIR)/* ${OBJ_DIR}/*

.PHONY: all run clean

