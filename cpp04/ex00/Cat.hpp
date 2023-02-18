/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:53:48 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 00:01:26 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"

class Cat : public Animal {
private:

public:
	void	makeSound() const;
	
	Cat( void );
	~Cat( void );
	Cat( const Cat& obj );
	
	Cat& operator=( const Cat& obj );
};

#endif
