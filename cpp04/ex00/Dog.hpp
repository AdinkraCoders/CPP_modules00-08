/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:48:54 by euyi              #+#    #+#             */
/*   Updated: 2022/10/27 23:59:05 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"

class Dog : public Animal {
private:

public:
	void	makeSound() const;
	
	Dog( void );
	~Dog( void );
	Dog( const Dog& obj );
	
	Dog& operator=( const Dog& obj );
};

#endif
