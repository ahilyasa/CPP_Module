#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <algorithm>
#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;

class AForm;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const string& name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);

		string getName() const;
		int getGrade() const;

		void increment();
		void decrement();

		void signForm(AForm& form);
		void executed(const AForm &form);

		~Bureaucrat();

	private:
		string _name;
		int _grade;
		void setGrade(int grade);
		
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
