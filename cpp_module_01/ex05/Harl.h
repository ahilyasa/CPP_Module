#ifndef HARL_H
#define HARL_H

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Harl {
public:
	Harl();
	void complain(string level);
private:
	string _levels[4];
	void (Harl::*fn[4])();

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif //HARL_H
