/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:06 by euyi              #+#    #+#             */
/*   Updated: 2022/11/04 15:46:31 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main ( void )
{
	Intern	intern;
	Form*	form;

	// form = intern.makeForm("shrubbery creation", "Bender");
	// form = intern.makeForm("robotomy request", "Bender");
	// form = intern.makeForm("presidential pardon", "Bender");
	form = intern.makeForm("foo bar", "Bender");

	
	if (form)
	{
		std::cout << form->getName() << std::endl;
		std::cout << std::boolalpha;
		std::cout << form->getSign() << std::endl;
		std::cout << form->getMinSign() << std::endl;
		std::cout << form->getMinExec() << std::endl;
		delete form;		
	}

	return (0);
}
