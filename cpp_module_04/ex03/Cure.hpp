#ifndef _CURE_HPP
#define _CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);
		AMateria* clone() const;
		void use(ICharacter& target);
		virtual ~Cure();
};

#endif