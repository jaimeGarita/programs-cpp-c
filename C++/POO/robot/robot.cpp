#include <iostream>
#include <string.h>
#include "robot.h"

Robot::Robot()
{

	/*TENEMOS QUE METER SERIAL, PORQUE NSERIE ES STATIC, POR LO CUAL, EL VALOR SIEMPRE SERA EL MISMO PARA TODOS LOS OBJETOS*/

	this->serial = Robot::nserie++;
	
	/*
	this->serial = this->nserie++;
	Robot::serial = Robot::nserie++;

	//PREGUNTAR PORQUE FUNCIONA ASI
	*/
}

unsigned int 
Robot::getNserie() {
	return serial;
}

void 
Robot::saludo(){
std::cout<<"Hola soy un robot"<<"\n";
}

void 
Robot::que_es(){
	std::cout<<"Mi numero es "<< this->serial <<"\n";
}


