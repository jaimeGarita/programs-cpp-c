

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//ALGORITMIA CREADA POR JAIME Y ARTURO
int main()
{
    int i; //VARIABLE INT I

    for(i=0;i<100000000000;i++){ //AL NECESITAR UN DELAY HEMOS TENIDO QUE AÑADIR UN NUMERO ELEVADO
    if(i%300 == 0){ //SI EL RESTO i dividido entre 300 ES 0
    	printf("\033[L"); //SALTO DE LINEA
    	printf("*"); //IMPRIMIE *
    	}

    if(i%400 == 0){ // SI EL RESTO DE 400 ES 0
    	printf("\033[2J"); //BORRA PANTALLA
    	}
    }
    return EXIT_SUCCESS;
}

