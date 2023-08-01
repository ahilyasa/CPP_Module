#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Animal";
	cout << "Animal Default Constructor called." << endl;
}

Animal::Animal(const Animal& animal) {
	*this = animal;
	cout << "Animal Copy Constructor called." << endl;
}

Animal& Animal::operator=(const Animal& animal) {
	if (this == &animal)
		return *this;
	this->_type = animal._type;
	cout << "Animal Assigment Operator called." << endl;
	return *this;
}

const string& Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
}

Animal::~Animal() {
	cout << "Animal deleted." << endl;
}