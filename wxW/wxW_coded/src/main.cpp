#include <string>
#include <iostream>

#include "classes.h"

using namespace std;

///#define DEBUG

template<typename T>
T f(T &x){
	return x;
}

int main( ) {
#ifdef DEBUG
	cout << "debug" << endl;		
#endif
    Klasse Objekt("ObjName");
	Objekt.Methode();

	int a{1};
	cout << f(a) << endl;	
}
