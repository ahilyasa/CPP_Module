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

		void makeSound() const;
		const string& getType() const;

		virtual ~WrongAnimal();

	protected:
		string _type;
};

#endif
