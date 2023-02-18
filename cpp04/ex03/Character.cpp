/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:26:51 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:37:42 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

std::string const & Character::getName( void ) const
{
	return (this->_name);
}

int const &	Character::getSlots( void ) const
{
	return (_slots);
}

AMateria const &	Character::getMateria(int n) const
{
	return ( *_materia[n] );
}

void Character::equip(AMateria* m)
{
	if ( this->_slots < 4 && m )
	{
		_materia[_slots] = m->clone();
		_slots++;
	}
}

void Character::unequip(int idx)
{
	if ( idx < this->_slots && idx >= 0 )
		_materia[idx]->setType("");
}

void Character::use(int idx, ICharacter& target)
{
	if ( idx < this->_slots && idx >= 0 )
	{
		if ( _materia[idx]->getType().size() > 0 )
			_materia[idx]->use(target);
	}
}

Character::Character( void ) : _slots(0) {
}

Character::Character( std::string const & name ) : _name(name), _slots(0) {
}

Character::Character( const Character& obj ) : _name(obj.getName()), _slots(obj.getSlots()) {
	int	i = obj.getSlots();
	i -= 1;
	while (i >= 0)
	{
		_materia[i] = getMateria(i).clone();	// the clone() method returns "new" object
		i--;
	}
}

Character::~Character( void ) {
	int	i = _slots;

	while (i >= 0)
	{
		delete _materia[i];
		i--;
	}
}
	
Character&	Character::operator=( const Character& obj ) {
	int	i = obj.getSlots();
	
	_name = obj.getName();
	_slots = obj.getSlots();
	i -= 1;
	while (i >= 0)
	{
		_materia[i] = getMateria(i).clone();	// getMateria(i) is already derived. therefore its clone() method will return a new* of itself
		i--;
	}
	
	return (*this);
}
