/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:43:02 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 17:02:43 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef	__AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <iostream>
# include <string>

# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string	_type;
	
public:
	virtual std::string const & getType( void ) const; //Returns the materia type
	virtual void				setType(std::string type) = 0;
	virtual AMateria* 			clone( void ) const = 0;
	virtual void 				use(ICharacter& target);

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( const AMateria& obj );
	virtual ~AMateria( void );

	AMateria&	operator=( const AMateria& obj );
};

#endif
