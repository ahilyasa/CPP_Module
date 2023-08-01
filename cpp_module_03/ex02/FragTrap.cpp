#include "FragTrap.hpp"

FragTrap::FragTrap() {
 	this->_name = "FragTrap";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " defoult created." << std::endl;
}

FragTrap::FragTrap(const string& name) {
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap) {
	*this = FragTrap;
	std::cout << "FragTrap " << this->_name << " is cloned." << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& FragTrap) {
	if (this == &FragTrap)
		return *this;
	this->_name = FragTrap._name;
	this->_hitPoint = FragTrap._hitPoint;
	this->_energyPoint = FragTrap._energyPoint;
	this->_attackDamage = FragTrap._attackDamage;
	std::cout << "FragTrap " << this->_name << " copy assigment operator called." << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " deleted." << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << ": High Five!" << std::endl;
}