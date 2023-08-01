#ifndef _FORM_HPP
#define _FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& form);
		Form& operator=(const Form& form);
		~Form();

		std::string getName() const;
		bool getSign() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat& bureaucrat);

	private:
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


};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
