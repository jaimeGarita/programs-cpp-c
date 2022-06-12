

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(){
	int i,primeros_num[MAX];

	for (i=0;i<10;i++){ //ALMACENAMOS LOS 10 PRIMEROS NUMEROS NATURALES EN UNA VARIABLE ARRAY
		primeros_num[i]=i;
		primeros_num[i] = primeros_num[i] + primeros_num[i-1]; //LE SUMAMOS EL VALOR DE LA CELDA ANTERIOR Y ESE RESULTADO LO ALMACENA EN LA ARRAY, EL SIGUIENTE NUMERO SUMARA EL RESULTADO ANTERIOR MAS EL NUMERO DE LA IZQUIERDA.
		}

	for (i=0;i<10;i++){
		printf("%i\n",primeros_num[i]);
		}

	

	return EXIT_SUCCESS;

}
