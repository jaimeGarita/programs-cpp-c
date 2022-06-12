#include <iostream>
#include "lado.h"

double op(){
	int n;
	static int i=0;

	i++;
	std::cout<<"Ingrese el "<<i<<"º operando: ";
	std::cin >>n;

	return n;
}

int main(){
	/* DECLARACION DE VARIABLES */
	double ca1;
	double ca2;

	/* DEFINICION DE VARIABLES */
	ca1=op();
	ca2=op();

	/* CREACION DE OBJETOS */
	Triangle C1;
	Triangle C2;

	Triangle H;
	
	/*COMO ES UN ATRIBUTO PRIVADO, NECESITAMOS MODIFICAR EL VALOR DEL ATRIBUTO DEL OBJETO C*/

	C1.setCateto(ca1);
	C2.setCateto(ca2);
	
	H.setCateto(C1+C2);

	std::cout <<"La hipotenusa es: " << H.getCateto();

	return 0;
}
