

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	
	double *vector = NULL;
	char ndlim;
	char sdlim;
	int pos=0;

	printf("Tamaño Vector: ");
	scanf("%c", &sdlim);

	do{
	vector = (double *) realloc (vector, (pos+1) * sizeof (double));
	scanf("%lf", &vector[pos++]);
	scanf("%c", &ndlim);
	}while(ndlim == ',');
	
	for(int p = 0; p<pos; p++){
		printf(" %lf ", vector[p]);
		printf("\n");
	}

	free(vector);

	return EXIT_SUCCESS;

}
