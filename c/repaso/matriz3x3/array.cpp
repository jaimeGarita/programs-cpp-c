

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define NUM 3

int main(){
	system("clear");	
	int array[NUM][NUM];
	int c=0;
	int filas[NUM];
	int result;
	int result2;
	int col[NUM];
	int diagonal= 0;
	for (int i = 0; i<NUM; i++){
		filas[i] = 1;
		col[i] = 1;
	}

	for (int col = 0; col<NUM; col++){
		for (int fil = 0; fil<NUM; fil++){
			printf("Rellena el array [%i][%i]", col, fil);
			scanf("%i", &array[col][fil]);

			
		}
		
	}

	for(int col=0; col<NUM; col++){
		for (int fil=0; fil<NUM; fil++){
			printf("%i ", array[col][fil]);
		}
	
		printf("\n");
		}
	for(int i = 0; i<NUM; i++){
		for (int j = 0; j<NUM; j++){
			if(i == 0){
			filas[i] *= array[i][j];
			}
			if(i == 1){
			filas[i] *= array[i][j];
			}
			if(i == 2){
			filas[i] *= array[i][j];
			}
		}
	}
	
	for (int i = 0; i<NUM; i++){
		for(int j = 0; j<NUM; j++){
			if(j == 0){
				col[j] *= array[i][j];
			}
			if (j == 1){
				col[j] *= array[i][j];
			}
			if(j == 2){
				col[j] *= array[i][j];
			}
		}
	}


		result = filas[0]+filas[1]+filas[2];
		result2 =col[0]+col[1]+col[2];
		printf(" Escalar Columnas: %i \n", result);
		printf(" Escalar Filas: %i \n", result2);


	for (int i = 0; i<NUM; i++){
		for (int j = 0; j<NUM; j++){
			if(i == j){
				diagonal += array[i][j];	
			}
		}
	}

	printf("Suma de diagonal: %i \n", diagonal);
 return 0;
}

