#include <iostream>

#include "equipo.hpp"

int main(){
	Equipo *Madrid= new Equipo();
	Equipo *Daniel= new Equipo();

	Madrid->dar();
	Madrid->ver();

	Daniel->dar();
	Daniel->ver();

	return 0;
}
