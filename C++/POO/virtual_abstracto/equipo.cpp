#include <iostream>
#include "equipo.hpp"

Equipo::Equipo(double c, int n){
	this->capital = c;
	this->njugadores = n;
}

double
Equipo::getCapital(){
	return this->capital;
}

unsigned
Equipo::getNjugadores(){
	return this->njugadores;
}

bool Equipo::entrenar(){
	if(njugadores==11){
		std::cout<<"Entrenando...";
		return true;
	}else{
		return false;
	}
}
