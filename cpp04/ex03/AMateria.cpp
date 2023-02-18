/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:26:37 by euyi              #+#    #+#             */
/*   Updated: 2022/10/31 19:41:34 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

void AMateria::use(ICharacter &target)
{
	(void) target;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

AMateria&	AMateria::operator=( const AMateria& obj ) {
	this->_type = obj.getType();
	return (*this);
}

AMateria::AMateria( const AMateria& obj ) : _type(obj.getType())  {
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::AMateria( void ) {
}

AMateria::~AMateria( void ) {
}
