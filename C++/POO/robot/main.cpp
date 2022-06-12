#include <iostream>
#include "robot.h"
#define N 10


int main(){

	Robot r[N];

	for(int i=0; i<N; i++){
	
	r[i].saludo();
	r[i].que_es();
	std::cout<<"\n";
	}

	return 0;
}
