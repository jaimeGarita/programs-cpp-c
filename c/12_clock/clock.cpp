

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <unistd.h>


int main(){

	for (int h = 0 ; h<24; h++){
		for (int m = 0; m<60 ; m++){
			for (int s = 0; s<60; s++){
				printf("%i::%i::%i \n\n", h,m,s);
				sleep(1);
				system("clear");
			}
	
		}
		
	}

	return EXIT_SUCCESS;

}
