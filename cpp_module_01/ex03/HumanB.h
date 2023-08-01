#ifndef _HUMANB_H
# define _HUMANB_H

#include <iostream>
#include "Weapon.h"

using std::string;
using std::cout;
using std::endl;

class HumanB {
public:
	HumanB(const string &name);
	void setWeapon(const Weapon &Weapon);
	void attack() const;
private:
	const Weapon *_weapon;
	string _name;
};

#endif //_HUMANB_H
