#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		void makeSound() const;
		virtual ~Dog();
		
};

#endif
