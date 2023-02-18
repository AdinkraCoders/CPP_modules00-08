/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:17:29 by euyi              #+#    #+#             */
/*   Updated: 2022/11/10 16:18:14 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

void	identify(Base* p)
{
	if ( dynamic_cast<A*>(p) )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	identify(&p);
}

Base*	generate(void)
{
	int i;

	srand (time(NULL));
	
	i = rand() % 3; 

	// std::cout << "i == " << i << std::endl;
	
	switch (i) {
		case 1:
			return ( new B );
		case 2:
			return ( new C );
	}
	return ( new A );
}

Base::~Base( void ) {

}
