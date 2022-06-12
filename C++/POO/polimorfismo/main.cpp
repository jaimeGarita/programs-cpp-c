#include <iostream>
#include "herviboro.hpp"

int main(){
	Animal *conejo = new Herviboro(4, 20);	
	
	conejo->dieta();

	std::cout << "\n";
	return 0;
}
