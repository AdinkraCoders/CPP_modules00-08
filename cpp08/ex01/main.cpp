/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:30:02 by euyi              #+#    #+#             */
/*   Updated: 2023/01/14 18:20:44 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main( void )
{
	Span obj(10000);
	
	try {
		obj.addNumber(100);
		obj.addNumber(2299);
		obj.addNumber(6);
		obj.addNumber(19);
		obj.addNumber(2);
	} 
	catch ( std::out_of_range &e ) {
		std::cout << e.what() << std::endl;
	}

	// try {
	// 	obj.addMany(9995, 15);
	// } 
	// catch ( std::out_of_range &e ) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	std::cout << "shortest span: " << (obj.shortestSpan()) << std::endl;
	// } 
	// catch ( std::length_error &e ) {
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	std::cout << "longest span: " << (obj.longestSpan()) << std::endl;
	// } 
	// catch ( std::length_error &e ) {
	// 	std::cout << e.what() << std::endl;
	// }

	obj.echoProperties();
	
	// copy constructor test
	// Span obj2(obj);
	// obj2.addNumber(100);
	// obj2.echoProperties();

	// copy assignment operator test
	// Span obj2(20);
	// obj2.addNumber(100);
	// obj2.echoProperties();
	// obj2 = obj;
	// obj2.echoProperties();
	
	return (0);
}

// PROJECT EXAMPLE
// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
