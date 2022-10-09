SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./obj
INC_DIR := ./inc \
		   /usr/include/
INC_DIRS := $(addprefix -I,$(INC_DIR))

LIB_DIR := ./lib \
		   /usr/lib/ \
		   /usr/lib64/
LIB_DIRS := $(addprefix -L,$(LIB_DIR))

LIB_FLAG := sfml-graphics sfml-window sfml-system 
LIB_FLAGS := $(addprefix -l,$(LIB_FLAG))

CXX := g++ 
CXXFLAGS := -g -Wall #-std=c++17
EXEC := prog
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

#prog: hello.o main.o
${EXEC} : ${OBJS}
	#g++-g -Wall -o prog hello.o main.o
	${CXX} ${CXXFLAGS} -o $(BIN_DIR)/${EXEC} ${OBJS} $(LIB_DIRS) $(LIB_FLAGS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	${CXX} ${CXXFLAGS} $(INC_DIRS) -c $< -o $@ 
	#evtl. -c $^
run: 
	$(BIN_DIR)/$(EXEC)

clean:
	rm -f $(BIN_DIR)/$(EXEC) ${OBJS}
