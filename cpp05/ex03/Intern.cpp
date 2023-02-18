/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:26:42 by euyi              #+#    #+#             */
/*   Updated: 2022/11/05 18:08:21 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Form*	Intern::makeForm( std::string fname, std::string target )
{
	char	arr[3][20] = { "shrubbery creation", "robotomy request", "presidential pardon"};
	int 	i;

	for (i = 0; i < 3; i++)
		if ( !fname.compare(arr[i]) )
			break;
	if ( i < 3 )
		std::cout << "Intern creates " << arr[i] << " Form" << std::endl;
	switch (i) {
		case 0:
			return ( new ShrubberyCreationForm(target) );
		case 1:
			return ( new RobotomyRequestForm(target) );
		case 2:
			return ( new PresidentialPardonForm(target) );
		default:
			std::cout << "Error! Form name '" << fname << "' doesn’t exist" << std::endl;
	}
	return (NULL);
}

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern( const Intern& ) {
}
	
Intern&	Intern::operator=( const Intern& ) {
	return (*this);
}
