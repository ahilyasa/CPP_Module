#ifndef _ICE_HPP
#define _ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& ice);
		Ice& operator=(const Ice& ice);
		AMateria* clone() const;
		void use(ICharacter& target);
		virtual ~Ice();
};

#endif