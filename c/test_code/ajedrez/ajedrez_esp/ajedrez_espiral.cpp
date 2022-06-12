

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX 20

int tablero_dimension(){
	int num;

	printf("Introduce la dimension del tablero: ");
		scanf("%i", &num);
	return num;
}

int tamaño_subcuadrados(){
	int num;
		printf("\n");
		printf("Introduce el tamaño del espiral: ");
			scanf("%i", &num);
	return num;
}

int main(){
	int num = tablero_dimension();
	int tamaño_subcuadrado=tamaño_subcuadrados();

        for(int i = 0; i<num; i++){
                for(int j = 0; j<num; j++){
                        if(((j+i)/tamaño_subcuadrado)%2==0){
                                printf("1");
                        }else{
                                printf("0");
                                        }


                }
                  printf("\n");
        }

        return EXIT_SUCCESS;

}
