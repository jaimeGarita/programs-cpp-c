#include <iostream>
#include "figura.h"

//CONSTRUCTOR
Figura::Figura(std::string nombre, double l1, double l2): nfigura(nombre),lado1(l1), lado2(l2)
{}

std::string 
Figura::getNfigura(){
	return nfigura;
}

//SETTER DE FIGURA
void
Figura::setNfigura(std::string n)
{
nfigura = n;
}

//GETTER LADO1 Y LADO2
double
Figura::getLado1(){
return this->lado1;
}

double
Figura::getLado2(){
return this->lado2;
}
