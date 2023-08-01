#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
		const string& getType() const;
		void makeSound() const;
		virtual ~WrongAnimal();

	protected:
		string _type;
};

#endif
