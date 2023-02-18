/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:35:20 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:39:47 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const &	Cure::getType( void ) const
{
	return (_cure);
}

void	Cure::setType(std::string type)
{
	_cure = type;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

Cure::Cure( void ) : _cure("cure") {
}

Cure::Cure( const Cure& obj ) : AMateria(){
	// _cure = obj.getType();
	(void) obj;
}
	
Cure::~Cure( void ) {
}

Cure&	Cure::operator=( const Cure& obj ) {
	// _cure = obj.getType();
	(void) obj;
	return (*this);
}
