#include "ScavTrap.hpp"

int main() {
	ScavTrap scavTrap("julide");

	scavTrap.attack("Meltem");
	scavTrap.guardGate();
	scavTrap.takeDamage(3);
	scavTrap.beRepaired(11);	
}