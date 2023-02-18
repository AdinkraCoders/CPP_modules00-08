/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:14:19 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 18:20:51 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	__BRAIN_HPP__
# define __BRAIN_HPP__

# include <iostream>
# include <string>

class Brain {
private:
	std::string	_ideas[100];

public:
	std::string  const&	getIdeas( void ) const;
	void				setIdeas( std::string id );

	Brain( void );
	Brain( std::string id );
	~Brain( void );
	Brain( const Brain& obj );

	Brain&	operator=( const Brain& obj );
};

#endif
