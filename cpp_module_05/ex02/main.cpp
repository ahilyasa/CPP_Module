#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat *bureaucrat = new Bureaucrat("ilknur", 1);
	AForm *form = new PresidentialPardonForm("bender");
	bureaucrat->signForm(*form);
	bureaucrat->executed(*form);
	cout << endl;
	Bureaucrat *bureaucrat2 = new Bureaucrat("oznur", 1);
	AForm *form2 = new RobotomyRequestForm("imrobbott");
	bureaucrat2->signForm(*form2);
	bureaucrat->signForm(*form2);
	bureaucrat2->executed(*form2);
	bureaucrat->executed(*form2);
	bureaucrat->signForm(*form2);
	cout << endl;
	Bureaucrat *bureaucrat3 = new Bureaucrat("murat", 1);
	AForm *form3 = new ShrubberyCreationForm("tree");
	bureaucrat3->signForm(*form3);
	bureaucrat3->executed(*form3);
	cout << endl;
	delete bureaucrat3;
	delete bureaucrat2;
	delete bureaucrat;
	delete form3;
	delete form2;
	delete form;
	return 0;
}