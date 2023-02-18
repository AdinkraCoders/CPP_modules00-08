/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:49:02 by euyi              #+#    #+#             */
/*   Updated: 2022/10/27 23:59:42 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << "Who Who" << std::endl;
}

Dog&	Dog::operator=( const Dog& obj ) {
	this->_type = obj._type;
	std::cout << "Dog Class Assignment Operator Called" << std::endl;
	return (*this);
}

Dog::Dog( const Dog& obj ) : Animal("Dog")  {
	this->_type = obj._type;
	std::cout << "Dog Class Copy Constructor Called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog Class Destructor Called" << std::endl;
}

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog Class Default Constructor Called" << std::endl;
}
