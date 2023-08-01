#ifndef _ROBOTOMYREQUESTFORM_HPP
#define _ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const string& rrfTarget);
		RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);
		~RobotomyRequestForm();

		virtual void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(const Bureaucrat& bureaucrat);


	private:
		string _rrfTarget;
};


#endif
