/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:05:42 by euyi              #+#    #+#             */
/*   Updated: 2022/11/09 20:51:39 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

int main ( int argc, char *argv[] )
{	
	if ( argc != 2 )
	{
		std::cerr << "Error! Wrong CMD argument count" << std::endl;
		return (1);
	}

	Convert obj(argv[1]);

	return (0);
}
