

#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int main(){
	int i=0;
	int par[MAX];
	for(i=0; i<=20; i+=2){
		par[i]=i;

		printf("%i\n",par[i]);
	}
 	

	return EXIT_SUCCESS;

}
