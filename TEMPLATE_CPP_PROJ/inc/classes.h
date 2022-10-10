#ifndef __CLASSES_H__
#define __CLASSES_H__

#include <string>
#include <iostream>

class Klasse{
private:
	std::string Attribut;

public:
	void setAttribut(std::string attribut){
		Attribut = attribut;
	};

	std::string getAttribut(){
		return Attribut;
	};
	
	void Methode(){
		std::cout << Attribut << std::endl;
	};
	//constructor
	Klasse(std::string attribut){
		Attribut = attribut;
	};
};

#endif
