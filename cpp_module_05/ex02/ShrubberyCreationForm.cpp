#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const string& scfTarget) : AForm("ShrubberyCreationForm", 145, 137){
	this->_scfTarget = scfTarget;
	cout << "ShrubberyCreationForm " << this->_scfTarget << " created." << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm) : AForm(shrubberyCreationForm), _scfTarget(shrubberyCreationForm._scfTarget) {
	*this = shrubberyCreationForm;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm) {
	AForm::operator=(shrubberyCreationForm);
	this->_scfTarget = shrubberyCreationForm._scfTarget;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::beSigned(const Bureaucrat& bureaucrat) {
	if (this->_sign == true)
		throw AForm::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_sign = true;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream file(this->_scfTarget + "_shrubbery", std::ios::trunc);
		file <<
			 "    *\n"<<
			 "   /.\\\n"<<
			 "  /o..\\\n"<<
			 "  /..o\\\n"<<
			 " /.o..o\\\n"<<
			 " /...o.\\\n"<<
			 "/..o....\\\n"<<
			 "^^^[_]^^^"
			 << std::endl;
		file.close();
		std::cout << this->_scfTarget + "_shrubbery created" << std::endl;
	}
}