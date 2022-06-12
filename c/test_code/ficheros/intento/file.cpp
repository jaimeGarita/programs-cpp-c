

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define FICHERO "contactos.csv"

#define MXNAME 0x100
#define MXPHONE 9
#define MXEMAIL 0x50

void read_file(FILE *pf, char *name, char *phone, char *email){
	fscanf(pf, "%[^,] %*[,]", name);
	fscanf(pf, "%[^,] %*[,]", phone);
	fscanf(pf, "%[^\n]", email);

}

void print_file(char *name, char *phone, char *email){
	printf("Nombre: %s\n", name);
	printf("Telefono: %s\n", phone);
	printf("Correo: %s\n", email);
	printf("\n");
}

int main(){
	
	FILE *pf;
	char name[MXNAME];
	char phone[MXPHONE];
	char email[MXEMAIL];

	if(!(pf = fopen(FICHERO, "r")) ){
		fprintf(stderr, "ERROR: NO SE ENCUENTRA EL ARCHIVO %s", FICHERO);
		return EXIT_FAILURE;
	}
	
	while(!(feof(pf))){
		read_file(pf, name, phone, email);
		print_file(name, phone, email);
	}
	return EXIT_SUCCESS;

}
