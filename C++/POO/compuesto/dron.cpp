#include <iostream>
#include "dron.hpp"

/*CONSTRUCTOR*/
/*NECESITAMOS UN PUNTERO A HELICE PARA PODER ACCEDER A LOS ATRIBUTOS DE HELICE Y DARLE VALORES A HELICE1 QUE ES NUESTRO OBJETO*/
Dron::Dron(std::string c, std::string m, unsigned int n, const Helice & helice ): helice1(helice) // SE PODRIA PONER THIS->HELICE MEJOR COMO ESTA
{
	this -> color = c;
	this -> marca = m;
	this -> ndrones = n;
}


/*METODO QUE EN CASO DE QUE HAYA MENOS DE 4 HELICES TE AÑADA*/
void
Dron::comprobar_estado(){
	char ask;

	if (helice1.getNhelices() < 4){

		std::cout << "No puedes hacer un dron porque te faltan las helices"<<"\n\n";

		std::cout << "¿Quieres añadir helices? (s/n) " << "\n";
		std::cin >> ask;

		if(ask == 's'){
			helice1.setNhelices(4);

			std::cout << "HAS AÑADIDO UN TOTAL DE " << helice1.getNhelices() << "\n";
		}
	}
}


/*IMPRIMIR LOS ESTADOS DE LA HELICE EN EL DRON, PARA LLAMAR COMPUESTO, NECESITAMOS LLAMARLE DESDE EL OBJETO*/
void
Dron::estado_helices(){
	std::cout << "***ESTADO DE LAS HELICES ***" << "\n\n";
	std::cout <<"Numero de helices: " << helice1.getNhelices() << "\n";
	std::cout <<"La velocidad de la corriente sin carga es de: " << helice1.getNcorriente() << "\n";
	std::cout << "La velocidad del rotor es de: " << helice1.getNvelocidadRotor() << "\n";
}
