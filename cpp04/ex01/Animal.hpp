/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:28:10 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 00:16:04 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>
# include <string>

class Animal {
protected:
	std::string	_type;

public:
	std::string		getType() const;
	virtual void	makeSound() const;

	Animal( void );
	Animal( std::string type );
	virtual ~Animal( void );
	Animal( const Animal& obj );
	
	Animal& operator=( const Animal& obj );
};

#endif
