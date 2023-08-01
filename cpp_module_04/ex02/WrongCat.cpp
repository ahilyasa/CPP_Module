#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	cout << "WrongCat Default Constructor called." << endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) {
	*this = wrongCat;
	cout << "WrongCat Copy Constructor called." << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat) {
	if (this == &wrongCat)
		return *this;
	this->_type = wrongCat._type;
	cout << "Animal Assigment Operator called." << endl;
	return *this;
}

void WrongCat::makeSound() const {
	cout << "Wrong Cat miyavvvvvv" << endl;
}

WrongCat::~WrongCat() {
	cout << "WrongCat deleted." << endl;
}