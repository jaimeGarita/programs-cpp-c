#include "dron.hpp"
#include "helice.hpp"
#include <iostream>

int main(){
Helice hel(0,0.4, 130, 15000 );
Dron art("verde","arturo", 1, hel);

std::cout << "*** CARACTERISTICAS DRON ***" << "\n";
std::cout << "COLOR :"<< art.getColor()<<"\n";
std::cout << "MARCA :"<< art.getMarca()<<"\n";
std::cout << "NUMERO SERIE: "<< art.getNdrones()<<"\n\n";

art.comprobar_estado();

art.estado_helices();

	return 0;
}
