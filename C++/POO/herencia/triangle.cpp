#include <iostream>
#include "triangle.h"
#include "figura.h"


//CONSTRUCTOR, NECESITO LLAMAR A FIGURA YA QUE EL TIENE LOS VALORES DE SUS ATRIBUTOS
Triangle::Triangle(std::string nombre, double l1, double l2, std::string tipo): Figura(nombre, l1, l2){

this ->tipo_triangulo = tipo;
}

//GETTER
std::string
Triangle::getTipo_triangulo(){
	return this->tipo_triangulo;
}

//VALORES DE GETTER
double
Triangle::returnLado1(){
	return getLado1();
}
double
Triangle::returnLado2(){
	return getLado2();
}

//ALGORITMIA DEL AREA
double
Triangle::operacion(){
	return ((lado1*lado2)/2);
}

std::string 
Triangle::returnNombre(){
	return getNfigura();
}
