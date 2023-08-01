#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& wrongCat);
		WrongCat& operator=(const WrongCat& wrongCat);
		void makeSound() const;
		virtual ~WrongCat();
		
};

#endif