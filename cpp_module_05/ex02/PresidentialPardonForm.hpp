#ifndef _PRESIDENTIALPARDONFROM_HPP
#define _PRESIDENTIALPARDONFROM_HPP

#include <iostream>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const string& target);
		PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& presidentialPardonForm);
		~PresidentialPardonForm();

		virtual void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(const Bureaucrat& bureaucrat);


	private:
		string _ppfTarget;
};

#endif
