

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int dimension_tablero(){
	int num;

	printf("Introduce la dimension del tablero: ");
		scanf("%i", &num);
	return num;

}

int subcuadrado(){
	int num;
	
	printf("\n");
	printf("Introduce la dimension de los subcuadrados del tablero: ");
		scanf("%i", &num);
	return num;
}


int main(){

        int num = dimension_tablero();
	int tamaño_subcuadrado = subcuadrado();

        for(int i = 0; i<num; i++){
                for(int j = 0; j<num; j++){
			if((i/tamaño_subcuadrado)%2==0){
                        	if((j/tamaño_subcuadrado)%2==0){
                                	printf("1 ");
                       		 }else{
                               		 printf("0 ");
                                        }
			}else{
				if((j/tamaño_subcuadrado)%2 != 0){
                                	printf("1 ");
                       		 }else{
                               		 printf("0 ");
                                        }
	

			}

                }
                  printf("\n");
        }

        return EXIT_SUCCESS;

}
