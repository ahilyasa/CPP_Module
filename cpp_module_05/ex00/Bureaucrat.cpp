#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	this->_name = "Default";
	this->_grade = 150;
	cout << "Bureaucrat default constructor called" << endl;
}

Bureaucrat::Bureaucrat(const string& name, int grade) : _name(name), _grade(grade) {
	setGrade(grade);
	cout << "Bureaucrat constructor called" << endl;
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
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	else
		this->_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High Exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low Exception";
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