#include "Zombie.h"

Zombie::Zombie() : _name("Undefined"){	
}

Zombie::Zombie(const string &name) {
	this->_name = name;
}

void Zombie::announce() {
	cout << _name << ": Braiiiiiiiiinnnnnzzzz...." << endl;
}

Zombie *Zombie::newZombie(string name) {
	return new Zombie(name);
}

void Zombie::randomChump(string name) {
	Zombie zombie(name);
	zombie.announce();
}

void Zombie::setName(const string &name) {
	this->_name = name;
}

Zombie::~Zombie() {
	cout << _name << " deconsructer called" << endl;
}