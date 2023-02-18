/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:34 by euyi              #+#    #+#             */
/*   Updated: 2022/10/11 20:25:24 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>

class my {
public:
	std::string	here;
	my( std::string y ) : here(y) {}
};

int main( void )
{
	char			arr[5][8] = { "DEBUG", "INFO", "WARNING", "ERROR", 0};
	
	std::cout << arr[4] << std::endl;
	return (0);
}
