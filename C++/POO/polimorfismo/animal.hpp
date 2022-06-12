#ifndef ANIMAL_HPP 
#define ANIMAL_HPP

class Animal{
	protected:
		unsigned patas;
		unsigned ndientes;
	
	public:

		virtual void dieta() = 0;
};

#endif
