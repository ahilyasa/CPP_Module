#ifndef _ANİMAL_HPP
#define _ANİMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal {
	protected:
		Animal();
		Animal(const Animal& animal);
		string _type;
	public:
		Animal& operator=(const Animal& animal);
		const string& getType() const;

		virtual void makeSound() const = 0;
		virtual ~Animal();
};

#endif
