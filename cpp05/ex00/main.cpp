/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:06 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 17:42:55 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main ( void )
{
	// TEST FOR OBJECT INSTANTIATION WITH WRONG GRADE VALUE
	// try {
	// 	Bureaucrat obj("joe", 0);
	// }
	// catch (std::out_of_range& what ) {
	// 	std::cout << what.what() << std::endl;
	// }

	// TEST FOR OBJECT INCREMENTATION INTO WRONG GRADE VALUE
	// Bureaucrat obj("joe", 1);
	// std::cout << obj.getGrade() << std::endl;
	// try {
	// 	obj.increment();
	// }
	// catch (std::out_of_range& what ) {
	// 	std::cout << what.what() << std::endl;
	// }
	
	// TEST FOR OBJECT DECREMENTATION PLUS OSTREAM OVERLOAD
	try {
		Bureaucrat obj("joe", 1);
		obj.decrement();
		std::cout << obj << std::endl;
	}
	catch (std::out_of_range& what ) {
		std::cout << what.what() << std::endl;
	}
	
	return (0);
}
