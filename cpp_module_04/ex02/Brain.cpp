#include "Brain.hpp"

Brain::Brain() {
	cout << "Brain Default Constructor called." << endl;
}

Brain::Brain(const Brain& brain) {
	*this = brain;
	cout << "Brain Copy Constructor called." << endl;
}

Brain& Brain::operator=(const Brain& brain) {
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_idea[i] = brain._idea[i];
	cout << "Brain Assigment Operator called." << endl;
	return *this;
}

Brain::~Brain() {
	cout << "Brain deleted." << endl;
}