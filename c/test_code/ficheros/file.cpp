

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


#define MXNAME 0x100
#define MXPHONE 9
#define MXMAIL 100

#define FICHERO "contactos.csv"

void read_entry(FILE *pf, char *name, char *phone, char *email){
	fscanf(pf, "%[^,] %*[,]",name);
	fscanf(pf, "%[^,] %*[,]", phone);
	fscanf(pf, "%[^\n]", email);
	fscanf(pf, "%*[\n]");
}

void print_entry(char *name, char *phone, char *email){
	
	printf("Nombre: %s\n", name);
	printf("Telefono: %s\n", phone);
	printf("Correo: %s\n", email);
	printf("\n");

}

int main(){
	
	FILE *pf;
	char name[MXNAME];
	char phone[MXPHONE];
	char mail[MXMAIL];

	if( !(pf = fopen (FICHERO, "r")) ){
		fprintf(stderr, " %s Fichero no encontrado \n",FICHERO);
		return EXIT_FAILURE;
	}

	while (!feof(pf)){
		read_entry(pf, name, phone, mail);
		print_entry(name, phone, mail);

	}
	
	free (pf);

	return EXIT_SUCCESS;

}
