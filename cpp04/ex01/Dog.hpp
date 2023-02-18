/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:48:54 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 18:24:57 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain*	_brPtr;

public:
	void			makeSound() const;
	void			echoBrainIdea() const;
	
	Dog( void );
	~Dog( void );
	Dog( const Dog& obj );
	
	Dog& operator=( const Dog& obj );
};


// Brain const&	Dog::getBrain( int n ) const
// {
// 	int	i;

// 	i = 0;
// 	while()
// }

#endif
