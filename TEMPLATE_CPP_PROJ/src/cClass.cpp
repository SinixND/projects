#include "cClass.h"

#include <string>
#include <iostream>

void cClass::setAttribute(std::string argument){
	mAttribute = argument;
};

std::string cClass::getAttribute(){
	return mAttribute;
};

void cClass::doMethod(){
	std::cout << mAttribute << std::endl;
};
//constructor
cClass::cClass(std::string argument){
	mAttribute = argument;
};
//destructor
cClass::~cClass(){
};
