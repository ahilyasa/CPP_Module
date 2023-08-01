#ifndef _SHRUBBERYCREATIONFORM_HPP
#define _SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const string& scfTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
		virtual ~ShrubberyCreationForm();

		virtual void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor);

	private:
		string _scfTarget;
};

#endif
