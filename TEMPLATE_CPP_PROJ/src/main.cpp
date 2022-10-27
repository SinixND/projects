#include <string>
#include <iostream>

#include "classes.h"

//#define DEBUG

int main( ) {
#ifdef DEBUG
	cout << "Start of file" << endl;		
#endif
    Klasse Objekt("ObjName");
	Objekt.Methode();
}
