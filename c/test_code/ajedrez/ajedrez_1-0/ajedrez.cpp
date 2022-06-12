

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX 5

#include "header.h"

int main(){

	int num = preguntar_dimension();
	
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
			if((j+i)%2==0){
				printf("1 ");
					}else{
				printf("0 ");
					}

			
		}
		  printf("\n");
	}
	
	return EXIT_SUCCESS;

}
