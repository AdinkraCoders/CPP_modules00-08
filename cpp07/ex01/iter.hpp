/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:37:36 by euyi              #+#    #+#             */
/*   Updated: 2023/01/09 19:07:24 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_HPP__
# define __ITER_HPP__

# include <iostream>

template <typename T>
void	iter( T arr[], size_t len, void (*funcPtr)(T &) )
{
	for ( size_t i = 0; i < len; i++ )
		funcPtr(arr[i]);
}

#endif
