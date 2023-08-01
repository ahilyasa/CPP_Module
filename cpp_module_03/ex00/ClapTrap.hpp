#ifndef _CLAPTRAP_HPP
#define _CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap {
	private:
		string _name;
		int	_hitPoint;
		int	_energyPoint;
		int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(const string& name);
		ClapTrap(const ClapTrap& ClapTrap);
		ClapTrap& operator=(const ClapTrap& ClapTrap);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif