/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:53:48 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 00:25:09 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:

public:
	void	makeSound() const;
	
	WrongCat( void );
	~WrongCat( void );
	WrongCat( const WrongCat& obj );
	
	WrongCat& operator=( const WrongCat& obj );
};

#endif
