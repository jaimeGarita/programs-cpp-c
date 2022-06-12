

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){

	//CREAR UN PROGRAMA QUE PIDA AL USUARIO EL TAMAÑO DEL ARRAY REPITIENDO EL PROGRAMA DEL VECTOR

	//1.- RESERVAR MEMORIA DINAMICA QUE QUIERA EL VECTOR
	int num;
	int *vector;
	int i=0;
	int user_add;
	printf("Introduce el tamaño del vector: ");
	scanf("%i", &num);

	vector = (int *) malloc (num);
	//2.- IMPLEMENTAR LOS DATOS QUE QUIERA EL VECTOR
	do{

		printf("Introduce su numero: ");
		scanf("%i", &user_add);
		i++;
		*(vector+i) = user_add;

	}while(num != i);

	for (int p = 0; p<i ; p++){
		printf("%i \n", *(vector+p+1));
	}

	free(vector);
	return EXIT_SUCCESS;

}
