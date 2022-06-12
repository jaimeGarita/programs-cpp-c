

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	int num;
	int i;
	printf("Tamaño de su array: ");
	scanf("%i", &num); //GUARDAMOS LA ARRAY EN NUMEROS
	
	float reales[num];

	while(num > i){	
		printf("%.2f, ", reales[num]); //IMPRIMIMOS LA ARRAY FLOTANTE
		i++; //INCREMENTAMOS I PARA LLEGAR A NUM
		reales[num]++; //SIRVE PARA IMPRIMIR LOS NUMEROS
}
	return EXIT_SUCCESS;

}
