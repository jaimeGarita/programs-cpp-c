#ifndef HERVIBORO_HPP
#define HERVIBORO_HPP

#include "animal.hpp"

class Herviboro: /*protected Animal*/ public Animal{
	public:

		unsigned getPatas();
		unsigned getNdientes();

		Herviboro(unsigned p, unsigned nd);

		void dieta();
};

#endif
