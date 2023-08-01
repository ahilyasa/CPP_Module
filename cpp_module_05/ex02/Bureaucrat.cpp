#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default") {
	this->_grade = 150;
	cout << "Bureaucrat default constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string& name, int grade) : _name(name) { //
	setGrade(grade);
	cout << this->_name << " constructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat.getName()) {
	*this = bureaucrat;
	cout << "Bureaucrat constructor called" << endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	if (this == &bureaucrat)
		return *this;
	setGrade(bureaucrat._grade);
	return *this;
}

string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

void Bureaucrat::setGrade(int grade) {
	if(grade < 1) {
		throw GradeTooHighException();
	}
	else if(grade > 150) {
		throw GradeTooLowException();
	}
	else {
		this->_grade = grade;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}


Bureaucrat::~Bureaucrat() {
	cout << this->_name << " Bureaucrat Deconstructor called" << endl;
}

void Bureaucrat::increment() {
	setGrade(_grade - 1);
}

void Bureaucrat::decrement() {
	setGrade(_grade + 1);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", grade " << bureaucrat.getGrade() << "." << endl;
	return out;
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << ((AForm&)form).getName() << "." << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << this->_name << " could not sign " << ((AForm&)form).getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executed(const AForm &form)
{
	try{
		std::cout << this->_name << " trying to execute " << ((AForm&)form).getName() << std::endl;
		((AForm&)form).execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " could not execute " << ((AForm&)form).getName() << " because " << e.what() << std::endl;
	}
}
