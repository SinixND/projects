SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
INC_DIR := ./inc
INC_DIRS := $(addprefix -I,$(INC_DIR))

LIB_DIR := ./lib 
LIB_DIRS := $(addprefix -L,$(LIB_DIR))

LIB_FLAG := R Rcpp RcppArmadillo RInside
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := g++ 
CXXFLAGS := -g -Wall #-std=c++17
EXEC := prog
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

#prog: hello.o main.o
${EXEC}: ${OBJS}
#	g++	-g -Wall -o prog hello.o main.o
	${CXX} ${CXXFLAGS} -o $(BIN_DIR)/${EXEC} ${OBJS} 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	${CXX} ${CXXFLAGS} $(INC_DIRS) $(LIB_DIRS) -o $@ -c $< $(LIB_FLAGS)
#	evtl. -c $^
run: 
	$(BIN_DIR)/$(EXEC)

clean:
	rm -f $(BIN_DIR)/$(EXEC) $(OBJ_DIR)/${OBJS}