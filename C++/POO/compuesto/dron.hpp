#ifndef DRON_HPP
#define DRON_HPP
#include <string>

#include "helice.hpp"
/*CLASE COMPUESTA POR LA HELICE*/
class Dron{

	private:
		unsigned int ndrones;
		std::string marca;
		std::string color;

	public:
		/*EL OBJETO HELICE 1 ES UN OBJETO TEMPORTAL, ES DECIR QUE ES EL MISMO QUE EL TIEMPO DE EJECUCION DE DRON*/

		Helice helice1; //LLAMAMOS AL OBJETO HELICE, TODO LO PRIVADO ACABA SIENDO PRIVADO EN ESTA CLASE
		Dron(std::string, std::string, unsigned int, const Helice &);
	
		void comprobar_estado(); 

		void estado_helices();

		unsigned int getNdrones() {return ndrones;};
		std::string getMarca()    {return marca;};
		std::string getColor()    {return color;};
		

		
};

#endif
