#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

class Array{
	private:

		std::string name;
		std::string apellido;

	public:
		Array();
		Array(std::string);
		Array(std::string, std::string);
		std::string getName();
};

#endif
