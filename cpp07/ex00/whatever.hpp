/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:06:41 by euyi              #+#    #+#             */
/*   Updated: 2023/01/09 14:11:46 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp(a);
	a = b;
	b = tmp;
}

template <typename T>
T const&	min(T const& a, T const& b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T const&	max(T const& a, T const& b)
{
	if ( a > b )
		return a;
	return b;
}

#endif
