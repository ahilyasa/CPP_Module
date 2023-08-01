#ifndef _AFORM_HPP
#define _AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
		virtual ~AForm();

		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		
		virtual void beSigned(const Bureaucrat& bureaucrat) = 0;
		virtual void execute(const Bureaucrat& bureaucrat) =0;

	protected:
		const std::string _name;
		bool _sign;
		const int _gradeToSign;
		const int _gradeToExecute;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class AlreadySignedException : public std::exception {
			public:
				const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
