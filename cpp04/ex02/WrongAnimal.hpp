/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:28:10 by euyi              #+#    #+#             */
/*   Updated: 2022/10/30 18:23:04 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string	_type;

public:
	std::string		getType( void ) const;
	void			makeSound( void ) const;

	WrongAnimal( void );
	WrongAnimal( std::string type );
	~WrongAnimal( void );
	WrongAnimal( const WrongAnimal& obj );
	
	WrongAnimal& operator=( const WrongAnimal& obj );
};

#endif
