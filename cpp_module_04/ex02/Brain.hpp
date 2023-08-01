#ifndef _BRAIN_CPP
#define _BRAIN_CPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain {
	public:
		Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		virtual ~Brain();

	private:
		string _idea[100];
};

#endif
