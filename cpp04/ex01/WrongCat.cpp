/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:52:04 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 00:24:56 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

void	WrongCat::makeSound() const
{
	std::cout << "Me How?" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& obj ) {
	this->_type = obj._type;
	std::cout << "WrongCat Class Assignment Operator Called" << std::endl;
	return (*this);
}

WrongCat::WrongCat( const WrongCat& obj ) : WrongAnimal("WrongCat") {
	this->_type = obj._type;
	std::cout << "WrongCat Class Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Class Destructor Called" << std::endl;
}

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")  {
	std::cout << "WrongCat Class Default Constructor Called" << std::endl;
}
