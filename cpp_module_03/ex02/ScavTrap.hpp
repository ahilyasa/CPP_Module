#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
	ScavTrap();
	ScavTrap(const string& name);
	ScavTrap(const ScavTrap& ScavTrap);
	ScavTrap& operator=(const ScavTrap& ScavTrap);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);

};


#endif