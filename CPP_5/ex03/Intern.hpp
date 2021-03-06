/* **************************************************************************** */
/*                                                                      .       */
/*   Intern.hpp                                                        / V\     */
/*                                                                   / `  /     */
/*   By: tilda      <tilda@student.21-school.ru.fr>                 <<   |      */
/*                                                                  /    |      */
/*   Created: 5/19/21 by tilda                                    /      |      */
/*                                                              /        |      */
/*                                                            /    \  \ /       */
/*                                                           (      ) | |       */
/*                                                   ________|   _/_  | |       */
/*                                                 <__________\______)\__)      */
/* **************************************************************************** */


#ifndef CPP_5_INTERN_HPP
#define CPP_5_INTERN_HPP

#include <iostream>
#include "Form.hpp"

typedef struct s_createFrom{
	const char*		nameForm;
	Form*			(*createFrom)(const std::string &target);
}		t_createFrom;

class Intern{
public:
	Intern();
	Intern(Intern const &copy);
	Intern& operator=(const Intern &assign);
	~Intern();

	Form *makeForm(const std::string &nameForm, const std::string &target);

	class wrongNameFormException : public std::exception{
		const char *what() const throw();
	};

private:
	static const t_createFrom _arrFormStruct[];
};


#endif