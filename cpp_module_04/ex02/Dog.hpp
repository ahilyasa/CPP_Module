#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		string getType() const;
		void makeSound() const;
		virtual ~Dog();
	private:
		Brain* brain;
};

#endif
