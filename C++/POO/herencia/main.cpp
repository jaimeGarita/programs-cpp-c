#include <iostream>

#include "figura.h"
#include "triangle.h"

double preguntar_lados(){
	double lado;
	static int i = 1;
	std::cout << "Introduce el " << i << " lado ";
	std::cin >> lado;

	i++;

	return lado;
}



int main(){
	double l1,l2;

	l1=preguntar_lados();
	l2=preguntar_lados();

	//NECESITO CREAR UN MALLOC PARA PODER METER LOS DATOS STRING COMO TRIANGULO
	Triangle *T1 = new Triangle("Triangulo", l1, l2, "isosceles");


//IMPRIMO LOS VALORES DE LAS FUNCIONES
std::cout<<"El primer lado es " << T1->returnLado1() << "\n"; //IMPRIMO EL RETURN YA QUE EL METODO ANTERIOR ESTABA PROTECTED

std::cout <<"El segundo lado es " << T1->returnLado2() << "\n\n";

std::cout <<"El area es " << T1->operacion() <<"\n";

std::cout <<"El nombre de la figura es " << T1->returnNombre() <<"\n";


}
