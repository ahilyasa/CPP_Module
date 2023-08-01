#ifndef _MATERIASOURCE_HPP_
#define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class MateriaSource: public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator=(const MateriaSource& materiaSource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const& type);

	virtual ~MateriaSource();


private:
	AMateria *_materia[4];
	int _count;
};

#endif
