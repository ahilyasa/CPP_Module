#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal[6] = {
			new Dog(),
			new Cat(),
			new Dog(),
			new Cat(),
			new Dog(),
			new Cat()
	};

	for (int i = 0; i < 6; i++) {
		animal[i]->makeSound();
		delete animal[i];
	}

	Dog basic;
	{
		Dog tmp = basic;
	}

	return 0;
}