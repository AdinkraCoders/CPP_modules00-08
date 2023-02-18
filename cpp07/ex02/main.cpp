/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:00:32 by euyi              #+#    #+#             */
/*   Updated: 2023/01/10 20:14:19 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

int main (void) {
	Array<int> obj(2);
	obj.setA(3, 0);
	obj.setA(83, 1);
	
	std::cout << obj.getA(0) << std::endl;
	std::cout << obj.getA(1) << std::endl;
	
	// Array<int> obj2;
	// obj2 = obj;
	
	// obj2.setA(44, 0);
	// obj2.setA(64, 1);
	// for (size_t i = 0; i < obj.size(); i++ )
	// {
	// 	std::cout << "obj[" << i << "] = " << obj[i] << std::endl;
	// 	std::cout << "obj2[" << i << "] = " << obj2[i] << std::endl;
	// }

	// try {
	// 	std::cout << obj[2] << std::endl;
	// }
	// catch ( const std::out_of_range &e )
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// Array<int> const ob(2);
	// ob[0] = 1;
	// std::cout << "ob[0] = " << ob[0] << std::endl;
	
	return (0);
}
