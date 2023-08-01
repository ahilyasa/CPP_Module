#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const string& target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_ppfTarget = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm) : AForm(presidentialPardonForm) { 
	*this = presidentialPardonForm;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialPardonForm) {
	AForm::operator=(presidentialPardonForm);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::beSigned(const Bureaucrat& bureaucrat) {
	if (this->_sign == true)
		throw AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else
		this->_sign = true;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) {
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else
		cout << this->_ppfTarget << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}