

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 5

int main(){
	
	unsigned pos = 0;
	char **nombres=NULL;
	char cont;
	int i = 0;
	nombres = (char**) realloc (nombres, (pos) * sizeof (char*));	

	do{
	printf("Introduce nombre de %iº amigos: ", i+1);
	scanf("%ms", nombres+(pos++));

	getchar();
	__fpurge(stdin);
	printf("Continuar s/n");
	scanf("%c", &cont);
	i++;
	}while(cont != 'n');
	
	for(int j = 0; j<pos; j++){
		printf("Nombre amigo: %s ", *(nombres+j));
	}
	free(nombres);
	return EXIT_SUCCESS;

}
