#include <iostream>
#include "array.hpp"

//OBJETIVO: CREAR UN ARRAY DE OBJETOS Y LLAMAR A DISTINTOS CONSTRUCTORES

int main(){
	//INICIALIZO EL ARRAY DE 4
	Array *p = new Array[4]();
	
	//LLAMO A LOS CONSTRUCTORES
	p[1] = Array("Luis");
	p[2] = Array();

	//IMPRIMO
	std::cout<<p[1].getName() <<"\n";
	std::cout <<p[2].getName() << "\n";

	return 0;
}
