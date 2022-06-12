#include "helice.hpp"

#include <iostream>
/*CONSTRUCTOR*/
Helice::Helice(unsigned int helice, double corriente, double emp, double velocidad){
	this->nhelices = helice;
	this->corriente_nocarga=corriente;
	this-> empuje = emp;
	this-> velocidad_rotor=velocidad;
}

unsigned int
Helice::getNhelices(){
	return this->nhelices;
}

void
Helice::setNhelices(unsigned int c){
	this -> nhelices=c;
}

double
Helice::getNcorriente(){
return corriente_nocarga;
}

double
Helice::getNempuje(){
return empuje;
}

double
Helice::getNvelocidadRotor(){
return velocidad_rotor;
}
