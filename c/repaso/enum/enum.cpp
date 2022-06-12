

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define NUM 100
#define file "file.txt"
#define file2 "file2.txt"

int main(){
	

	FILE *p;

	char nombre[NUM];
	
	p = fopen(file, "r");
	
	do{
	fgets(nombre, NUM, p);
	}while(!feof(p));

	printf("Name: %s", nombre);


	fclose(p);
	p = fopen(file2, "r");

	do{
	fgets(nombre, NUM, p);
	printf("archivo 2: %s", nombre);
	
	

	}while(!feof(p));
	
	fclose(p);
	return EXIT_SUCCESS;

}
