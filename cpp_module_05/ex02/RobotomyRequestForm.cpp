#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const string& rrfTarget) : AForm("RobotomyRequestForm", 72, 45) {
	this->_rrfTarget = rrfTarget;
	cout << "RobotomyRequestForm " << this->_rrfTarget << " created." << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm) : AForm(robotomyRequestForm) {
	*this = robotomyRequestForm;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyRequestForm) {
	AForm::operator=(robotomyRequestForm);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::beSigned(const Bureaucrat& bureaucrat) {
	if (this->_sign == true)
		throw AForm::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_sign = true;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else
	{
		srand(time(NULL));
		std::cout << "Drilling noises..." << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->_rrfTarget << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomization failed!" << std::endl;
	}
}