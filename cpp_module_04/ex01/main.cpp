#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	const Animal* animals[4] = {new Cat, new Dog, new Cat, new Dog};

	for (int i = 0; i < sizeof(animals) / sizeof(Animal*); ++i) {
		animals[i]->makeSound();
		delete animals[i];
	}
	cout << endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	return 0;
}