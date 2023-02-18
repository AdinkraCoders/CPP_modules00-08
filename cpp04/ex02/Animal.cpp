/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:46:50 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:15:56 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

std::string	Animal::getType( void ) const
{
	return ( _type );
}

// void	Animal::makeSound( void ) const
// {
// 	std::cout << "Animal Makes No Sound!" << std::endl;
// }

Animal&	Animal::operator=( const Animal& obj ) {
	this->_type = obj._type;
	std::cout << "Animal Class Assignment Operator Called" << std::endl;
	return (*this);
}

Animal::Animal( const Animal& obj ) {
	this->_type = obj._type;
	std::cout << "Animal Class Copy Constructor Called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal Class Destructor Called" << std::endl;
}

Animal::Animal( std::string type ) : _type(type) {
	std::cout << "Animal Class Parameterized Constructor Called" << std::endl;
}

Animal::Animal( void ) : _type("Anim") {
	std::cout << "Animal Class Default Constructor Called" << std::endl;
}
