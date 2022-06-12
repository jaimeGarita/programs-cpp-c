

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(){
	int i,primeros_num[10];

	for (i=1;i<=10;i++){ //ALMACENAMOS LOS 10 PRIMEROS NUMEROS NATURALES EN UNA VARIABLE ARRAY
		primeros_num[i]=i;
		}

	for (i=1;i<=10;i++){ //IMPRIMIMOS LOS 10 PRIMEROS NUMEROS DE UNO EN UNO
		printf("%i\n",primeros_num[i]);
		}

	return EXIT_SUCCESS;

}
