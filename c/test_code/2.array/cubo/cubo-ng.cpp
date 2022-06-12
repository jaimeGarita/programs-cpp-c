

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int borde(int lado, int columna, int user_add){
	return lado == 0 || lado == user_add - 1 || columna == 0 || columna == user_add - 1 || lado == columna -1 ;
}

int main(){
	int user_add;
	
	printf("Lado: ");
	scanf("%i", &user_add);
	
	for (int lado = 0 ; lado<user_add; lado++){
		for (int columna = 0; columna<user_add; columna++){
			if(borde(lado, columna, user_add)){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}	

	return EXIT_SUCCESS;

}
