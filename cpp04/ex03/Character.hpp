/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:27:15 by euyi              #+#    #+#             */
/*   Updated: 2022/10/31 20:24:16 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	__CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string	_name;
	int			_slots;
	AMateria	*_materia[4];

public:
	std::string const & getName( void ) const;
	int const &			getSlots( void ) const;
	AMateria const &	getMateria(int n) const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);

	Character( void );
	Character( std::string const &name );
	Character( const Character& obj );
	~Character( void );
	
	Character&	operator=( const Character& obj );
};
	
#endif
