#include <iostream>
#include <string>
#include "string.h"

void preguntar_nombre(std::string *name){

	std::cout<<"Introduce tu nombre ";
	std::cin >>*name;
}

void preguntar_password(std::string *password){
	std::cout<<"Introduce password ";
	std::cin>>*password;
}

int main(){
	std::string name;
	std::string password;

	preguntar_nombre(&name);
	preguntar_password(&password);

	String P1(name, password);
	
	std::cout<<P1.getName();

	std::cout<<"\n";

	std::cout<<P1.getPassword();
	
	
	if(P1.getName() == "Jaime" && P1.getPassword() == "1234"){

		system("clear");
		std::cout <<"\n\n\n\n";
		system("figlet CONECTANDO, ESPERE UNOS MINUTOS...");

		std::cout << "TE HAS REGISTRADO CORRECTAMENTE";
	}

}
