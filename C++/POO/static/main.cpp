#include <iostream>
#include "static.h"

#define N 10

int main(){

Suma op[N];

for(int i=0; i<N; i++){

	std::cout<<"Se ha creado el " << op[i].getAumentar()<<" objeto"<<"\n";

}

	std::cout << "El numero total de objetos " << Suma::getNobjetos() << "\n" ; 

	std::cout << "La suma de los numeros 2 y 3 es: " <<Suma::sumar(2,3)<< "\n";

	std::cout << op[1].sumar(2,3)<<"\n";
	
	return 0;
}
