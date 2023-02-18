/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:53:48 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:13:51 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain*	_brPtr;

public:
	void	makeSound( void ) const;
	
	Cat( void );
	virtual ~Cat( void );
	Cat( const Cat& obj );
	
	Cat& operator=( const Cat& obj );
};

#endif
