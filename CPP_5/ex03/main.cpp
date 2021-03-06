/* **************************************************************************** */
/*                                                                      .       */
/*   main.cpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/18/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
	Bureaucrat Rob("Rob", 26);
	Bureaucrat Fred("Fred", 72);
	Bureaucrat Nick("Nick", 145);
	Form *ppf = new PresidentialPardonForm("A");
	Form *rrf = new RobotomyRequestForm("B");
	Form *scf = new ShrubberyCreationForm("C");
	Rob.executeForm(*ppf);
	Rob.incrementGrage();
	Rob.signForm(ppf);
	Fred.signForm(rrf);
	Nick.signForm(scf);
	for (int i = 0; i < 27; i++){
		Rob.incrementGrage();
		Nick.incrementGrage();
		Fred.incrementGrage();
	}
	Rob.executeForm(*ppf);
	Fred.executeForm(*rrf);
	Nick.executeForm(*scf);
	Intern someRandomIntern;
	Form* rrf1;
	try{
		rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e){
		e.what();
	}
	Fred.signForm(rrf1);
	Fred.executeForm(*rrf1);
	Form* scf1;
	try{
		scf1 = someRandomIntern.makeForm("fadsf", "Bender");
		Fred.signForm(scf1);
		Fred.executeForm(*scf1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	delete ppf;
	delete rrf;
	delete scf;
	delete rrf1;
	return (0);
}
