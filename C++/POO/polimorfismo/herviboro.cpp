#include "herviboro.hpp"

#include <iostream>

Herviboro::Herviboro(unsigned p=0, unsigned nd=0){
	this->patas = p;
	this->ndientes = nd;
}

void Herviboro::dieta(){
	std::cout << "Soy un herviboro, tengo " << this->patas << " patas y tengo " << this-> ndientes << " dientes";
}

unsigned 
Herviboro::getPatas(){
	return patas;
}

unsigned
Herviboro::getNdientes(){
	return ndientes;
}
