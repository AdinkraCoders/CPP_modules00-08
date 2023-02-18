/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:06 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 17:54:01 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main ( void )
{
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
	
	try {
		Bureaucrat bobj("Joe", 2);
		Form fobj("Form one", 1, 1);
		
		fobj.beSigned(bobj);
		bobj.signForm();
	}
	catch (std::out_of_range & what) {
		std::cout << what.what() << std::endl;
	}
	
	
	
	return (0);
}
