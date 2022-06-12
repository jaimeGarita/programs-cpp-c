#include <iostream>
#include "static.h"


Suma::Suma(){
	this -> aumentar = Suma::nobjetos++;
}

int 
Suma::getAumentar(){
	return this->aumentar;
}

/* METODO STATIC */
double 
Suma::sumar(int op1, int op2){
	return op1+op2;
}

int 
Suma::getNobjetos(){
	return Suma::nobjetos;
}
