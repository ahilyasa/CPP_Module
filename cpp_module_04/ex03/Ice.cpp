#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	cout << "Ice Default Constructor called." << endl;
}

Ice::Ice(const Ice& cure) : AMateria("ice") {
	cout << "Ice copy constructor called" << endl;
}

Ice& Ice::operator=(const Ice& ice) {
	if (this == &ice)
		return *this;
	this->_type = ice._type;
	cout << "Ice Assigment Operator called." << endl;
	return *this;
}

AMateria* Ice::clone() const {
	cout << "Ice Clone Constructor called." << endl;
	return new Ice(*this);
}

void  Ice::use(ICharacter& target) {
	cout << "* shoots an ice bolt at" <<  target.getName() <<  " *" << endl;
}

Ice::~Ice() {
	cout << "Ice destructor called" << endl;
}