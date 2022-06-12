#include <stdlib.h>
#include <iostream>
#include "operaciones.h"

Operaciones::Operaciones(){ //METODO CONSTRUCTOR, DAMOS VALORES INICIALES A LAS VARIABLES, EL CONSTRUCTOR TIENE QUE LLAMARSE IGUAL QUE LA CLASE
	opn1 = 0;
	opn2 = 0;
	result = 0;
}


/*
 *****************************
 * ALGORITMOS DE OPERACIONES *
 *****************************
 */

void Operaciones::suma(){
	this->insertar();
	result = opn1 + opn2;
	this->imprimir();
}

void Operaciones::resta(){
	this->insertar();
	result = opn1 - opn2;
	this->imprimir();
}

void Operaciones::multiplicacion(){
	this->insertar();
	result = opn1 * opn2;
	this->imprimir();
}

void Operaciones::division(){
	this ->insertar();
	result = opn1 / opn2;
	this ->imprimir();
}


/*
 **************************
 * METODOS PARA PREGUNTAR *
 **************************
 * */
void Operaciones::insertar(){
	std::cout<<"Ingerese el primer numero: ";
	std::cin >>opn1;

	std::cout<<"Ingrese el segundo numero: ";
	std::cin >>opn2;
}

/*
 **********************************
 * METODO PARA IMRPIMIR RESULTADO *
 **********************************
*/

void Operaciones::imprimir(){
	std::cout << "El resultado es " << result ;
}


