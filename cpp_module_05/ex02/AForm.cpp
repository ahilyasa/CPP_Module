#include "AForm.hpp"

AForm::AForm() : _name("Default"), _sign(false), _gradeToSign(150), _gradeToExecute(150) {
	cout << "AForm Default constructor called." << endl;
}

AForm::AForm(const string &name, int gradeToSign, int gradeToExecute) : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw(AForm::GradeTooLowException());
	if( _gradeToSign < 1 || _gradeToExecute < 1)
		throw(AForm::GradeTooHighException());
}

AForm::AForm(const AForm& form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	*this = form;
}

AForm& AForm::operator=(const AForm& form) {
	this->_sign = form.getSign();
	return *this;
}

AForm::~AForm() {
	cout << this->_name << " destructor called." << endl;
}

string AForm::getName() const{
	return this->_name;
}

bool AForm::getSign() const{
	return this->_sign;
}

int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

const char* AForm::AlreadySignedException::what() const throw() {
	return "Already Signed";
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
	out << form.getName() << " is signed grade: " << form.getSign() << ", this form sign grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute() << "." << endl;
	return out;
}