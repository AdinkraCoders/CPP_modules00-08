/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:20:59 by euyi              #+#    #+#             */
/*   Updated: 2022/10/31 19:21:55 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* obj)
{
	if ( _used < 4 && obj )
	{
		_obj[_used] = obj;
		_used++;
	}
	else
	{
		delete obj;
		std::cout << "LearnMateria has 4 items Already" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while ( i < _used )
	{
		if ( ! type.compare(_obj[i]->getType()) )
			return (_obj[i]);
		i++;
	}
	return (NULL);
}

MateriaSource::MateriaSource() : IMateriaSource(),  _used(0) {
}

MateriaSource::MateriaSource( const MateriaSource& obj ) : IMateriaSource(), _used(0) {
	(void) obj;
}

MateriaSource::~MateriaSource() {
	while ( _used > 0 )
	{
		_used--;
		delete _obj[_used];
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& obj ) {
	(void) obj;
	return (*this);
}
