

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


int main(){

	char **vector = NULL;
	unsigned pos = 0;
	char add_friends;
//PROGRAMA QUE HACE QUE PIDA NOMBRES DE ANIMGO Y LUEGO LOS IMPRIMA
	
	do{
		vector = (char**) realloc (vector ,(pos+1) * sizeof(char*));
		system("clear");
		printf("Introduce tu primer amiguito: ");
		scanf("%ms", vector+(pos++));
		
		getchar();		
		printf("¿Quieres continuar añadiendo amigos? s/n");
		scanf("%c", &add_friends);
	}while(add_friends != 'n');

	for(unsigned i=0 ; i<pos ; i++){
		printf("%s", *(vector+i));
		printf("\n");
	}
	
	return EXIT_SUCCESS;

}
