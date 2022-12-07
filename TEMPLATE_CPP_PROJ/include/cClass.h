#ifndef _CLASSES_H_
#define _CLASSES_H_

#include <string>
#include <iostream>

class cClass{
private:
	std::string mAttribute;

public:
	void setAttribute(std::string argument);
	
	std::string getAttribute(); //one per attribute
	
	void doMethod();

	//constructor
	cClass(std::string argument);
	//destructor
	~cClass();
};

#endif
