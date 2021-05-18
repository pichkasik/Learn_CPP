/* **************************************************************************** */
/*                                                                      .       */
/*   Bureaucrat.hpp                                                        / V\     */
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


#ifndef CPP_5_BUREAUCRAT_HPP
#define CPP_5_BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat& operator=(const Bureaucrat &assign);
	~Bureaucrat();

	int getGrade() const;
	const std::string &getName() const;
	void incrementGrage();
	void decrementGrage();
	void signForm(Form *form);
	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};

private:
	const std::string _name;
	int _grade;
};

enum gradeEnum{
	MIN_GRADE = 150,
	MAX_GRADE = 1
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif