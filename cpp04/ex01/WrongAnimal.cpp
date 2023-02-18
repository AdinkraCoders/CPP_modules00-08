/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:46:50 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:00:03 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

std::string	WrongAnimal::getType() const
{
	return ( _type );
}

void	WrongAnimal::makeSound() const
{
	std::cout << " " << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& obj ) {
	this->_type = obj._type;
	std::cout << "WrongAnimal Class Assignment Operator Called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj ) {
	this->_type = obj._type;
	std::cout << "WrongAnimal Class Copy Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Class Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
	std::cout << "WrongAnimal Class Parameterized Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( void ) : _type("Anim") {
	std::cout << "WrongAnimal Class Default Constructor Called" << std::endl;
}
