#include "array.hpp"
#include <iostream>

//CONSTRUCTORES

Array::Array(){
this->name="NO TIENE GILIPOLLAS";
}

Array::Array(std::string n){
	this->name=n;
}

Array::Array(std::string n, std::string a){
	this->name=n;
	this->apellido=a;
}

//GETTER

std::string
Array::getName(){
	return name;
}
