#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "DiamondTrap";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " created by default." << std::endl; 

}

DiamondTrap::DiamondTrap(const string& name) : FragTrap() {
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is create." << std::endl; 

}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap) {
	*this = DiamondTrap;
	std::cout << "DiamondTrap " << DiamondTrap._name << " is cloned." << std::endl;

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& DiamondTrap) {
	if(this == &DiamondTrap)
		return *this;
	ClapTrap::_name = DiamondTrap._name + "_clap_name";
	ScavTrap::_name = DiamondTrap._name;
	FragTrap::_name = DiamondTrap._name;
	_name = DiamondTrap._name;
	this->_hitPoint = DiamondTrap._hitPoint;
	this->_energyPoint = DiamondTrap._energyPoint;
	this->_attackDamage = DiamondTrap._attackDamage;
	return *this;
}

void DiamondTrap::attack(const string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	cout << "DiamondTrap " << _name << " is actually ClapTrap " << ClapTrap::_name << endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " deleted." << std::endl;

}