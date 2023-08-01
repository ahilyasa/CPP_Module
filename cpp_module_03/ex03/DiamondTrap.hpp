#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		string _name;
	public:
		DiamondTrap();
		DiamondTrap(const string& name);
		DiamondTrap(const DiamondTrap& DiamondTrap);
		DiamondTrap& operator=(const DiamondTrap& DiamondTrap);
		~DiamondTrap();

		void whoAmI();
		void attack(const string& target);
};

#endif