#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class AMateria {
	public:
		AMateria(string const& type);
		string const& getType() const;
		virtual AMateria* clone() const = 0; 
		virtual void use(ICharacter& target);
	protected:
		string _type;
};

#endif
