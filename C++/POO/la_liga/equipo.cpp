#include <iostream>
#include "equipo.hpp"

Equipo::Equipo(double c, int n){
	capital = c;
	njugadores = n;
}

double
Equipo::getCapital(){
	return this->capital;
}

unsigned
Equipo::getNjugadores(){
	return this->njugadores;
}
