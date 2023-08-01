#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		virtual ~Cat();

		void makeSound() const;
	private:
		Brain* brain;
};

#endif
