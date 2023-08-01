#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(const string& name);
		FragTrap(const FragTrap& FragTrap);
		FragTrap& operator=(const FragTrap& FragTrap);
		~FragTrap();

		void highFivesGuys(void);
};

#endif

//overload - aşırı yükleme
//override - ezme, üzerine yazma


