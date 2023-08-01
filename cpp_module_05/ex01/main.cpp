#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat b1("ilknur", 16);
		cout << b1;
	}catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}


	try{
		cout << endl;
		Bureaucrat b2("oznur", 162);
		cout << b2;
	}catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}


	try{
		cout << endl;
		Bureaucrat b3("Sonay", 16);
		Form f1("Teknik Şartname", 111, 19);
		b3.signForm(f1);
		cout << b3;
		cout << f1;
	}catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}


	try{
		cout << endl;
		Bureaucrat b4("Nurhan", 34);
		Form f2("Teknik Şartname", 35 , 3);
		b4.signForm(f2);
		cout << b4;
		cout << f2;
	}catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}


	try{
		cout << endl;
		Bureaucrat b5("Murat", 1);
		Form f3("Teknik Şartname", 3, 21);
		b5.signForm(f3);
		cout << b5;
		cout << f3;
	}catch(std::exception& e) {
		std::cerr << e.what() << endl;
	}

}