#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	brain = new Brain();
	cout << "Cat Default Constructor called." << endl;	
}

Cat::Cat(const Cat& cat) {
	*this = cat;
	cout << "Cat Copy Constructor called." << endl;
}

Cat& Cat::operator=(const Cat& cat) {
	if (this == &cat)
		return *this;
	this->_type = cat._type;
	this->brain = new Brain();
	*this->brain = *cat.brain;
	cout << "Cat Assigment Operator called." << endl;
	return *this;
}

void Cat::makeSound() const {
	cout << "Cat miyavvv..." << endl;
}

Cat::~Cat() {
	delete brain;
	cout << "Cat deleted." << endl;
}