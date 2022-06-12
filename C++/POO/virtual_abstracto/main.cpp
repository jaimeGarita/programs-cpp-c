#include <iostream>
#include "equipo.hpp"

int main(){
	Equipo *madrid = new Equipo(3.4555, 11);
	

	std::cout << "El capital del madrid es: " << madrid->getCapital();

	std::cout << "\n";

	std::cout << "Los numero de jugadores es:"<< madrid->getNjugadores() << "\n";

	std::cout << madrid->entrenar() << "\n";
	return 0;
}

