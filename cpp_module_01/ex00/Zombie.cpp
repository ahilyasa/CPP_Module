#include "Zombie.h"

Zombie::Zombie() : _name("undefined") {
}
Zombie::Zombie(const string &name) {
	this->_name = name;
}

void Zombie::announce() {
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie() {
	cout << _name << " deconsructer called" << endl;
}