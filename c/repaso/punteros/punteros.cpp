

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	
	int p;
	p = 4;
	
	int *n = &p;
	int *n_2 = n;
	
	printf("%i", *n);

	printf("%i", *n_2);

	return EXIT_SUCCESS;

}
