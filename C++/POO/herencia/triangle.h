#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "figura.h"
//CLASE HIJA PUBLICO: TODOS LOS MIEMBROS PUBLICAS Y PROTEGIDOS DE LA CLASE SE CONSERVAN PARA LAS CLASES HIJAS
class Triangle : public Figura{ //EL HIJO ES TRIANGLE Y EL PADRE ES FIGURA
	private: 
		std::string tipo_triangulo;

	public:
		Triangle(std::string nombre, double l1, double l2, std::string tipo);
		double operacion();
		std::string getTipo_triangulo();

		//METODOS PARA PODER ACCEDER A LOS LADOS YA QUE SON METODOS PROTECTED
		double returnLado1(); 
		double returnLado2();

		std::string returnNombre();

		

};

#endif
