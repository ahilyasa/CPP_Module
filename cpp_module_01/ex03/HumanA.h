#ifndef _HUMANA_H_
# define _HUMANA_H_

#include <iostream>
#include <string>
#include "Weapon.h"

using std::cout;
using std::endl;
using std::string;

class HumanA {
public:
	HumanA(const string &name, const Weapon &weapon);
	void attack();
private:
	const Weapon *_weapon;
	string _name;
};

#endif
