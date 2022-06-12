

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	
	unsigned n_celdas;
	double *v;

	printf("Numero de array a llenar: ");
	scanf("%u", &n_celdas);

	v = (double *) malloc (n_celdas * sizeof(double));

		for (int i = 0; i<n_celdas; i++){
			printf(" v[%u]: ", i+1);
			scanf(" %lf", v + i);
		}

		for (int p = 0; p<n_celdas; p++){
			printf("%.2lf ", *(v+p));
		}

	return EXIT_SUCCESS;

}
