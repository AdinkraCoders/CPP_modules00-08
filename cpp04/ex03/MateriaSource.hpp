/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:15:16 by euyi              #+#    #+#             */
/*   Updated: 2022/10/31 19:22:14 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	__MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include <string>
# include <iostream>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int			_used;
	AMateria	*_obj[4];

public:
	void learnMateria(AMateria* obj);
	AMateria* createMateria(std::string const & type);
	
	MateriaSource();
	MateriaSource( const MateriaSource& obj );
	~MateriaSource();

	MateriaSource&	operator=( const MateriaSource& obj );
};

#endif
