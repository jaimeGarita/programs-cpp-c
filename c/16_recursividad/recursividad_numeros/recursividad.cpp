

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int f(int x){
	if(x<0){
		return 0;
}
		printf("%i", x);

		f(x-1);
}


int main(){
	f(5);
	

return EXIT_SUCCESS;

}
