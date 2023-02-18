/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:55:01 by euyi              #+#    #+#             */
/*   Updated: 2022/10/31 19:50:01 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria {
private:
	std::string	_cure;

public:
	std::string const & getType() const;
	void				setType(std::string type);
	void				use( ICharacter& target );
	AMateria*			clone() const;

	Cure( void );
	Cure( const Cure& obj );
	~Cure( void );

	Cure&	operator=( const Cure& obj );
	
};

#endif
