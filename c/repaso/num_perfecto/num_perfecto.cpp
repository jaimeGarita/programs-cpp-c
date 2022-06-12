

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	
	int sum=0, c=0;
	
for (int n = 2; n<10000; n++){
	sum=0; //RESETEAR PROGRAMA
	for(int i=1; i<n;i++){ //BUCLE PARA HAYAR LOS DIVISORES
		if (n%i == 0){ //SI N RESTO I ES == 0
			sum+=i; //INCREMENTE EN SUMA
		if(sum == n){ //SI LA SUMA ES == N QUIERE DECIR QUE EL NUMERO ES PERFECTO

			printf("PERFECT %i \n", n); //IMPRIME
			c++; //INCREMENTA C PARA DECIR QUE I ES NUMERO PERFECTO SOLO 5 VECES
		}
		}
			if(c==20){ //EN CASO DE QUE SUPERE LOS 5 NUMEROS PERFECTOS, EL PROGRAMA PARA
				return EXIT_SUCCESS;
		}
	
	}
}
	return EXIT_SUCCESS;
}
