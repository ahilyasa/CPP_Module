#include "AMateria.hpp"

AMateria::AMateria(const string& type) {
	this->_type = type;
	cout << "AMateria Copy Constructor called." << endl;
}

string const& AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
}