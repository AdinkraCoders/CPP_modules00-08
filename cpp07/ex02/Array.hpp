/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:17:53 by euyi              #+#    #+#             */
/*   Updated: 2023/01/09 19:07:13 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <stdexcept>

template <typename T>
class	Array {
private:
	T*		_a;
	size_t	_aLen;

public:
	void	setA( T const tmp, size_t pos )
	{
		if ( pos < _aLen )
			_a[pos] = tmp;
	}
	
	T const	getA( const size_t n ) const
	{
		if ( n < _aLen )
			return _a[n];
		return static_cast<T>(0);
	}
	
	T const*	getA() const
	{
		return _a;
	}
	
	size_t const&	size( void ) const
	{
		return _aLen;
	}

	Array( void ) : _a(NULL), _aLen(0) {	
	}

	Array( size_t n ) : _a(new T[n]), _aLen(n) {
	}

	Array( const Array& obj ) : _a(NULL), _aLen(obj.size()) {
		if ( _aLen )
		{
			_a = new T[_aLen];
			for ( size_t i = 0; i < _aLen; i++)
				_a[i] = obj.getA(i);
		}		
	}
	
	~Array() {
	delete[] _a;
	}

	Array& operator = ( const Array& obj )
	{
		_aLen = obj.size();
		if ( _aLen )
		{
			_a = new T[_aLen];
			for ( size_t i = 0; i < _aLen; i++)
				_a[i] = obj.getA(i);
		}
		return (*this);
	}
	
	// This operator is used for accessing elements stored in _a[X] instance
	// of this object directly through the object itself. 
	// z.B. obj[3] will return obj._a[3]
	T& operator [] ( size_t i ) const {
		if ( i >= _aLen )
			throw std::out_of_range("Array::OutOfBoundsException!");
		return (_a[i]);
	}
};
	
#endif
