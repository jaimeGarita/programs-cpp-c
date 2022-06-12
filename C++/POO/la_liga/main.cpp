#include <iostream>
#include "liga.hpp"
#include "equipo.hpp"

int main(){
	Equipo *madrid = new Equipo(3.4555, 11);
	

	std::cout << "El capital del madrid es: " << madrid->getCapital();

	std::cout << "\n";

	std::cout << "Los numero de jugadores es: "<< madrid->getNjugadores();
	return 0;
}
