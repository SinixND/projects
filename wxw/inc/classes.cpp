#include "classes.h"

#include <string>
#include <iostream>

void Klasse::setAttribut(std::string attribut){
	Attribut = attribut;
};

std::string Klasse::getAttribut(){
	return Attribut;
};

void Klasse::Methode(){
	std::cout << Attribut << std::endl;
};
//constructor
Klasse::Klasse(std::string attribut){
	Attribut = attribut;
};
//destructor
Klasse::~Klasse(){
};
