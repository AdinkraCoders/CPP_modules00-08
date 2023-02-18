/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:35:08 by euyi              #+#    #+#             */
/*   Updated: 2023/01/12 13:49:11 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	int					arr[] = {13, 0, 19, 14, 9, 10};
	std::vector<int>	hold(arr, arr + 6);	
	int					n;
	
	n = 1;
	easyfind(hold, n);
	// try {
	// 	easyfind(hold, n);
	// }
	// catch ( std::invalid_argument& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	
	return 0;
}
