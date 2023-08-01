#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		void makeSound() const;
		virtual ~Cat();
	private:
		Brain* brain;
};

#endif
