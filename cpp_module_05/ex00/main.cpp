#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat bureaucrat("ilknur", 130);
		cout << bureaucrat;
		for (int i = 0; i < 5; ++i) {
			bureaucrat.decrement();
			cout << bureaucrat;
		}
		cout << endl;
		Bureaucrat bureaucratTwo("Oznur", 7);
		cout << bureaucratTwo;
		for (int i = 0; i < 5; ++i) {
			bureaucratTwo.increment();
			cout << bureaucratTwo;
		}

		Bureaucrat bureaucratThree("Merve", 0);
	}
	catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}
	return 0;
}