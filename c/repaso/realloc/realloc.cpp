

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
/*	//REALLOC
	int *r = NULL;
	int pos = 0;
	int vscanf;
	do{
		r = (int *) realloc(r, (pos+1) *sizeof(int));
		printf("Numero r[%i]", pos);
		vscanf=scanf("%i", (r+pos));
		pos++;
	}while(vscanf != 0);

	for(int i = 0; i<pos; i++){
		printf("%i", *(r+i));
	}
	
	free (r);
*/
	//MALLOC
	
	int *m;
	int num;
		
		printf("Cantidad num a imprimir: ");
		scanf("%i", &num);

		m = (int *) malloc (num * sizeof(int));
	
		for(int i = 0; i<num; i++){
			printf("Numero m[%i]", i);
			scanf("%i", (m+i));
		}
		for (int i = 0; i<num; i++){
		printf("%i", *(m+i));
		}

	return EXIT_SUCCESS;

}
