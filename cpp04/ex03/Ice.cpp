/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:34:22 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:39:08 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const &	Ice::getType() const
{
	return (_ice);
}

void	Ice::setType(std::string type)
{
	_ice = type;
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

Ice::Ice( void ) : _ice("ice") {
}

Ice::Ice( const Ice& obj ) : AMateria() {
	// _ice = obj.getType();
	(void) obj;
}
	
Ice::~Ice( void ) {
}

Ice&	Ice::operator=( const Ice& obj ) {
	// _ice = obj.getType();
	(void) obj;
	return (*this);
}
