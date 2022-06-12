

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 12
int main(){
	
	int array[MAX];

        array[0] = 0;
        array[1] = 1;

        for (int i = 2 ; i < MAX ; i++){
		array[i] = array [i - 1] + array [i - 2];
	}
	
	for (int i = 2; i < MAX ; i++){
		printf("%i .- %i \n",i, array[i]);
	}
	return EXIT_SUCCESS;

}
