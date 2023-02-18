/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:39:29 by euyi              #+#    #+#             */
/*   Updated: 2022/11/10 14:41:37 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{	
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*		deserialize(uintptr_t raw)
{
	return ( reinterpret_cast<Data*>(raw) );
}
