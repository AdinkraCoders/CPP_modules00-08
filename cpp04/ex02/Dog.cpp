/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:49:02 by euyi              #+#    #+#             */
/*   Updated: 2022/10/30 18:22:38 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

void	Dog::echoBrainIdea( void ) const
{
	std::cout << this->_brPtr->getIdeas() << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Who Who" << std::endl;
}

Dog&	Dog::operator=( const Dog& obj ) {
	this->_type = obj._type;
	this->_brPtr = new Brain("Dog Brain Assigned");
	std::cout << "Dog Class Assignment Operator Called" << std::endl;
	return (*this);
}

Dog::Dog( const Dog& obj ) : Animal("Dog")  {
	this->_type = obj._type;
	this->_brPtr = new Brain("Dog Brain Copied");
	std::cout << "Dog Class Copy Constructor Called" << std::endl;
}

Dog::~Dog( void ) {
	delete this->_brPtr;
	std::cout << "Dog Class Destructor Called" << std::endl;
}

Dog::Dog( void ) : Animal("Dog"), _brPtr(new Brain("Dog Brain")) {
	std::cout << "Dog Class Default Constructor Called" << std::endl;
}
