/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:08:16 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 17:56:17 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

void	Brain::setIdeas( std::string id )
{
	this->_ideas[0] = id;
}

std::string const&	Brain::getIdeas( void ) const
{
	std::string const& ref = this->_ideas[0];
	return (ref);
}

Brain&	Brain::operator=( const Brain& obj ) {
	this->_ideas[0] = obj.getIdeas();
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::Brain( const Brain& obj ) {
	_ideas[0] = obj.getIdeas();
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( std::string id ) {
	_ideas[0] = id;
	std::cout << "Brain Parameterized constructor called" << std::endl;
}

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
}
