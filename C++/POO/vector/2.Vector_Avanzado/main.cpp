#include <cstdlib>
#include <iostream>
#include <vector>

#define N 15

using namespace std;


void print(const vector<unsigned> &vec, const char *title=""){
					//Sera constante el template, es decir que sera siempre unsigned
	vector<unsigned>::const_iterator it; //objeto iterador, solo tiene metodos

	cout << "Exercises Vector" << title << "\n";
	cout << "\n";

	cout << "Vec Capacity " << vec.capacity() << "\n";
	cout << "Vec Empty " << (vec.empty() ? "true" : "false") << "\n";
	cout << "Vec Size " << vec.size() << "\n";
	cout << "Vec Front " << vec.front() << "\n";
	cout << "Vec Last " << vec.back() << "\n";
	cout << "Vec: [ " << "\n";

	for(it=vec.begin(); it!=vec.end(); it++){
		cout << *it << " ";
	}
	cout << " ]";
	cout << "\n";
}
//We use to pointer to v because we need to point a vector class
void push(vector <unsigned> *v, unsigned val){
	v->push_back(val); //v call to method push_back in a class vector
	print(*v, "Push");
}

unsigned pop(vector <unsigned> *v){
	unsigned pop_back = v->back(); //Method to call back number in the tail
	cout << "Pop data " << pop_back;

	v->pop_back();
	print(*v, "Pop ");

	return pop_back;
}

unsigned next_fibo(){
	//Algoritm to fibonacci form
	static unsigned int fibo1=1, fibo2=1;
	unsigned int fibo=fibo1+fibo2;

	fibo2=fibo1;
	fibo1=fibo;
	
  return fibo;

}

void cantidad(unsigned *cant){
	//Method to select the space with the toil
	cout << "Cantidad a ingresar ";
	cin >> *cant;
}

int main(){

	unsigned cant = 0;
	cantidad(&cant);
	//template objet
	vector<unsigned> vect;

	//Reserve a cant and move this
	vect.reserve(cant);
	vect.push_back(1);
	
	//Push and print the push option
	for(int i= 0; i<N; i++){
		push(&vect, next_fibo());
	}
	//pop vect
	for(int i = 0; i<N/2; i++){
		pop(&vect);
	}
	//ask txema
	unsigned *data= vect.data();
		
	cout << "\n";

	/*CLEAR*/
	push(&vect, next_fibo());
	vect.clear();
	print(vect,"Clearing");





	return 0;

}
