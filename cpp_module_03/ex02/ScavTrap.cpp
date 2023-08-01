#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "ScavTrap";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " defoult created." << std::endl;
}

ScavTrap::ScavTrap(const string& name) {
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " is created." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " deleted." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap) {
	*this = ScavTrap;
	std::cout << "ScavTrap " << this->_name << " is cloned." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap) {
	if (this == &ScavTrap)
		return *this;
	_name = ScavTrap._name;
	_hitPoint = ScavTrap._hitPoint;
	_energyPoint = ScavTrap._energyPoint;
	_attackDamage = ScavTrap._attackDamage;
	std::cout << "ScavTrap " << this->_name << " copy assigment operator called" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
	else
		cout << "ScavTrap " << this->_name << " has no " << (!this->_energyPoint ? "energy" : "hit points") << " left!" << endl;
}


void ScavTrap::guardGate(void) {
	cout << "ScavTrap in Gate keeper mode" << endl;
}