#ifndef _ANİMAL_HPP
#define _ANİMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal {
	protected:
		string _type;
	public:
		Animal();
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual ~Animal();

		virtual void makeSound() const;
		const string& getType() const;
};

#endif
