

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	const float E = 0.001;
	float num;
	
	printf("Ingrese su numero Real: ");
	scanf("%f", &num);

	if(num > 3-E && num < 3+E) // SI NUM ES MAYOR QUE EL 3-E Y NUM ES MENOR QUE 3+E 
		printf("Su numero esta en el entorno"); //IMPRIMA EL ENTORNO
	else //SI NO
		printf("Su numero no esta en el entorno"); //IMPRIMA QUE NO ESTA EN EL ENTORNO
		

	return EXIT_SUCCESS;

}
