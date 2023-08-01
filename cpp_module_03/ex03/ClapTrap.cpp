#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "ClapTrap";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " created by default." << std::endl; 
}

ClapTrap::ClapTrap(const string& name) {
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " is create." << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap) {
	std::cout << "ClapTrap " << ClapTrap._name << " is cloned." << std::endl;
	*this = ClapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap) {
	std::cout << "ClapTrap " << this->_name << " copy assigment operator called." << std::endl;
	if (this == &ClapTrap)
		return *this;
	_name = ClapTrap._name;
	_hitPoint = ClapTrap._hitPoint;
	_energyPoint = ClapTrap._energyPoint;
	_attackDamage = ClapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " deleted." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if(this->_hitPoint > 0  && this->_energyPoint > 0) {
		std::cout << "ClapTrap '" << this->_name << "' attacks '" << target << "', causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
	else
		std::cout << "ClapTrap '" << this->_name << "' has no " << (!this->_attackDamage ? "energy" : "hit points") <<  " left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoint > 0) {
		std::cout << "ClapTrap '" << this->_name << "' takes " << amount << " points of damage" << std::endl;
		this->_hitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoint > 0 && this->_energyPoint > 0) {
		std::cout << "ClapTrap '" << this->_name << "' is repaired by " << amount << " points!" << std::endl;
		this->_hitPoint += amount;
		this->_energyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no " << (!this->_energyPoint ? "energy" : "hit points") << " left!" << std:: endl;
}

