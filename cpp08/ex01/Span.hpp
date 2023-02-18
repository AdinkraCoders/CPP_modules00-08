/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:49:48 by euyi              #+#    #+#             */
/*   Updated: 2023/01/14 18:16:14 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	__SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <vector>
# include <stdexcept>
# include <cstdlib>

class	Span {
private:
	unsigned int		_len;
	std::vector<int>	_span;

public:
	void	addNumber( int n );
	void	addMany(unsigned int freq, int value);
	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;
	void	echoProperties( void ) const;


	Span( void );
	Span( unsigned int n );
	~Span( void );
	Span( const Span& obj );
	
	Span& operator=( const Span& obj );
};

#endif


// Span::Span( const Span& obj ) : _n(obj.getN()){
// 	unsigned int	i;
	
// 	i = static_cast<unsigned int>(_n);
// 	while (--i >= 0)
		
	
// }