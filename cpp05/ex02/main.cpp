/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:06 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 19:49:27 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main ( void )
{
	// Form	*morph = new ShrubberyCreationForm("MyForm");
	Form	*morph = new RobotomyRequestForm("MyForm");
	// Form	*morph = new PresidentialPardonForm("MyForm");
	
	try {
		Bureaucrat	bur("Guru", 45);

		morph->beSigned(bur);
		morph->execute(bur);
		// bur.executeForm(*morph);

	}
	catch ( const std::out_of_range& what ) {
		std::cout << what.what() << std::endl;
	}

	delete morph;

	// std::cout << obj.getMinSign() << std::endl;
	
	// TEST FOR OBJECT DECREMENTATION PLUS OSTREAM OVERLOAD
	// Form obj("Form one", 2, 2);
	// std::cout << obj << std::endl;

	// TEST FOR GRADES EXCEPTION THROWING
	// try {
	// 	Form obj("Form one", 0, 1);
	// }
	// catch (std::out_of_range & what) {
	// 	std::cout << what.what() << std::endl;
	// }

	// TEST FOR OSTREAM OVERLOAD
	// Form obj("Form one", 1, 1);
	
	// std::cout << std::boolalpha;
	// std::cout << obj << std::endl;
	
	// try {
	// 	Bureaucrat bobj("Joe", 2);
	// 	Form fobj("Form one", 2, 1);
		
	// 	fobj.beSigned(bobj);
	// 	bobj.signForm();
	// }
	// catch (std::out_of_range & what) {
	// 	std::cout << what.what() << std::endl;
	// }
	
	
	
	return (0);
}
