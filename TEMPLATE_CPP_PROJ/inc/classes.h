#ifndef CLASSES_H
#define CLASSES_H

#include <string>
#include <iostream>

class Klasse{
private:
	std::string Attribut;

public:
	void setAttribut(std::string attribut);

	std::string getAttribut();
	
	void Methode();

	//constructor
	Klasse(std::string attribut);
	//destructor
	~Klasse();
};

#endif
