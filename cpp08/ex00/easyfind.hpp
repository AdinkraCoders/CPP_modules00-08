/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:38:21 by euyi              #+#    #+#             */
/*   Updated: 2022/11/14 17:54:00 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <vector>
# include <algorithm>


template <typename T>
std::vector<int>::iterator	easyfind( T obj, int n )
{
	std::vector<int>::iterator	it = std::find(obj.begin(), obj.end(), n);

	if ( it == obj.end() )
		throw std::invalid_argument("easyfind::NoOccurenceFound Exception!");
	std::cout << n << " exists in container" << std::endl;
	return it;
}

#endif
