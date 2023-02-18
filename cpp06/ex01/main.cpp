/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:43:00 by euyi              #+#    #+#             */
/*   Updated: 2022/11/10 14:44:23 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

int main ()
{
	t_Data			*one;
	t_Data			*two;
	uintptr_t		tmp;
	
	one = new t_Data;
	one->testVar = 90;
	
	tmp = serialize(one);
	two = deserialize(tmp);

	std::cout << two->testVar << std::endl;

	delete (two);
	
	return (0);
}
