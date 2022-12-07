#include <string>
#include <iostream>

#include "cClass.h"

using namespace std;

///#define DEBUG

template<typename MyType>
MyType doFunct(MyType &argument){
	return argument;
}

int main(int argc, char **argv) {
#ifdef DEBUG
	cout << "debug" << endl;		
#endif
    cClass oObject("ObjName");
	oObject.doMethod();

	int a{1};
	cout << doFunct(a) << endl;	

    return 0;
}
