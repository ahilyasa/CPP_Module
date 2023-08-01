#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "WrongAnimal";
	cout << "WrongAnimal Default Constructor called." << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal) {
	*this = wrongAnimal;
	cout << "WrongAnimal Copy Constructor called." << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal) {
	if (this == &wrongAnimal)
		return *this;
	this->_type = wrongAnimal._type;
	cout << "WrongAnimal Assigment Operator called." << endl;
	return *this;
}

void WrongAnimal::makeSound() const {
	cout << "WrongAnimal sound" << endl;
}

const string& WrongAnimal::getType() const {
	return  this->_type;

}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal deleted." << endl;
}