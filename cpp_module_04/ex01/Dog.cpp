#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	brain = new Brain();
	cout << "Dog Default Constructor called." << endl;
}

Dog::Dog(const Dog& dog) {
	*this = dog;
	cout << "Dog Copy Constructor called." << endl;
}

Dog& Dog::operator=(const Dog& dog) {
	if (this == &dog)
		return *this;
	this->_type = dog._type;
	this->brain = new Brain();
	*(this->brain) = *(dog.brain);
	cout << "Dog Assigment Operator called." << endl;
	return *this;
}

void Dog::makeSound() const {
	cout << "Dog hav hav...." << endl;
}

Dog::~Dog() {
	delete brain;
	cout << "Dog deleted." << endl;
}