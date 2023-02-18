/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:17:32 by euyi              #+#    #+#             */
/*   Updated: 2022/11/10 16:14:44 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BASE_HPP__
# define __BASE_HPP__

# include <stdlib.h> 	/* srand, rand */
# include <time.h>		/* time */

class Base {
private:

public:

	virtual ~Base( void );
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
