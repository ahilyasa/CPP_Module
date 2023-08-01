#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	cout << "Cure Default Constructor called." << endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure) {
	cout << "Cure copy constructor called" << endl;
}

Cure& Cure::operator=(const Cure& cure) {
	if (this == &cure)
		return *this;
	this->_type = cure._type;
	cout << "Cure Assigment Operator called." << endl;
	return *this;
}

AMateria* Cure::clone() const {
	cout << "Cure Clone Constructor called." << endl;
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	cout << "* heals " << target.getName() << " ’s wounds *" << endl;
}

Cure::~Cure() {
	cout << "Cure destructor called" << endl;
}