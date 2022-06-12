

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	int num;

    do {
        printf ("Introducd un numero del 1 al 10: ");
        scanf ("%i", &num);
    }
    	while (num <1 || num > 10);
	printf("su numero es %i \n", num);
   

	return EXIT_SUCCESS;

}
