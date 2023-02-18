/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:04:02 by euyi              #+#    #+#             */
/*   Updated: 2023/01/10 20:11:11 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

// This function simply prints out
// the data stored in param c upon
// every call
void func(std::string &c)
{
	std::cout << c << std::endl;
}

int main(void)
{
	std::string arr[] = {"Ggggggggg", "Hhhhhhhhhhh", "Iiiiiiiiii"};
	int	len = 3;
	
	iter<std::string>(arr, len, func);

	return 0;
}
