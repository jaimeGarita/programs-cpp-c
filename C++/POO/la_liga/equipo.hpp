#ifndef EQUIPO_HPP 
#define EQUIPO_HPP
#include <iostream>
#include "liga.hpp"

//LO QUE VOY A RECIBIR ES UNA CLASE CON METODOS VIRTUALES

class Equipo: protected Liga{

	public:

		Equipo(double c, int n);

		double getCapital();
		unsigned getNjugadores();

		bool entrenar();

};

#endif
