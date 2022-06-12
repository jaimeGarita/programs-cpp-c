#include <iostream>
#include <vector>

int main(){
	std::vector<int> vct;
	int numeros;
	
	using namespace std;

	cout << "Numero a meter: (numero negativo para parar) " << "\n";
	do{
	cin >> numeros;

	vct.push_back(numeros);

	}while(numeros>0);
	
	cout<<"El total de numeros añadidos al vector: " << int(vct.size()) << "\n";
	
	cout <<

	return 0;	
	

}
