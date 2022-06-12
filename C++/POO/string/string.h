#ifndef __STRING_H__
#define __STRING_H__

class String{	

//friend int main(); 

//PODEMOS VER DESDE LA FUNCION MAIN LAS CLASES PUBLICAS Y PRIVADAS

	public:
		String(std::string, std::string);	

		std::string getName();
		void setName(std::string);
	
		std::string getPassword();
		void setPassword(std::string);

	private:
		std::string name;
		std::string password;

};

#endif
