#include "Form.hpp"

Form::Form() : _name("Default"), _sign(false), _gradeToSign(150), _gradeToExecute(150) {
	cout << "Form Default constructor called." << endl;
}

Form::Form(const string &name, int gradeToSign, int gradeToExecute) : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw(Form::GradeTooLowException());
	else if( this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw(Form::GradeTooHighException());
	cout << "Form `" << this->_name << "` is created" << endl;
}

Form::Form(const Form& form) : _name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {
	*this = form;
}

Form& Form::operator=(const Form& form) {
	this->_sign = form.getSign();
	return *this;
}

Form::~Form() {
	cout << "Form " << this->_name << " destructor.." << endl;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->_sign = true;
	else
		throw GradeTooLowException();
}




string Form::getName() const{
	return this->_name;
}

bool Form::getSign() const{
	return this->_sign;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << " is signed grade: " << form.getSign() << ", this form sign grade : " << form.getGradeToSign() << ", execute grade : " << form.getGradeToExecute() << "." << endl;
	return out;
}
