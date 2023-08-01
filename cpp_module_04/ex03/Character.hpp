#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(const string& name);
		Character(const Character& character);
		Character& operator=(const Character& Character);
		string const & getName() const;
		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		virtual ~Character();
	private:
		AMateria* _inventory[4];
		string _name;
		int	_count;
};

#endif