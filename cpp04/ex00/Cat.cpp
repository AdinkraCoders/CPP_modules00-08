/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:52:04 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 00:00:04 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

void	Cat::makeSound() const
{
	std::cout << "Me How?" << std::endl;
}

Cat&	Cat::operator=( const Cat& obj ) {
	this->_type = obj._type;
	std::cout << "Cat Class Assignment Operator Called" << std::endl;
	return (*this);
}

Cat::Cat( const Cat& obj ) : Animal("Cat") {
	this->_type = obj._type;
	std::cout << "Cat Class Copy Constructor Called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat Class Destructor Called" << std::endl;
}

Cat::Cat( void ) : Animal("Cat")  {
	std::cout << "Cat Class Default Constructor Called" << std::endl;
}
