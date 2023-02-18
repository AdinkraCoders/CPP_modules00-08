/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:28:49 by euyi              #+#    #+#             */
/*   Updated: 2023/01/14 18:18:54 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void	Span::echoProperties( void ) const
{
	std::cout << "\nVECTOR PROPERTIES\nSpan Capacity: " << _span.capacity()
				<< "\nSpan Size: " << _span.size() << std::endl;
	for (unsigned int i = 0; i < _span.size(); ++i)
		std::cout << "index [" << i << "] => " << _span.at(i) << " | ";	
	std::cout << std::endl;	
}

int	Span::longestSpan( void ) const
{
	int	longest;
	
	if ( _span.size() < 2 )
			throw std::length_error("longestSpan::NumbersTooFew");
	longest = 0;		
	for (unsigned int i = 0; i < (_span.size() - 1); ++i )
	{
		if ( std::abs(_span.at(i) - _span.at(i + 1)) > longest )
			longest = std::abs(_span.at(i) - _span.at(i + 1));
	}
	return (longest);
}

int	Span::shortestSpan( void ) const
{
	int	shortest;
	
	if ( _span.size() < 2 )
			throw std::length_error("shortestSpan::NumbersTooFew");
	shortest = 2147483647;		
	for (unsigned int i = 0; i < (_span.size() - 1); ++i )
	{
		if ( std::abs(_span.at(i) - _span.at(i + 1)) < shortest )
			shortest = std::abs(_span.at(i) - _span.at(i + 1));
	}
	return (shortest);
}

void	Span::addMany(unsigned int freq, int value)
{
	if ( _len >= (freq + _span.size()) )
		_span.insert(_span.end(), freq, value);
	else
		throw std::out_of_range("addMany::_spanVectorArrayOutOfMemory!");
}

void	Span::addNumber( int n )
{
	if ( _len > _span.size() )
		_span.push_back(n);
	else
		throw std::out_of_range("addNumber::_spanVectorArrayOutOfMemory!");
}

Span::Span( void ) : _len(0) {
}

Span::Span( unsigned int n ) : _len(n) {
	_span.reserve(_len);
}

Span::~Span( void ){
}

Span::Span( const Span& obj ) : _len(obj._len) {
	_span.reserve(_len);
	for (unsigned int i = 0; i < obj._span.size(); ++i)
		_span.push_back(obj._span.at(i));
}

Span& Span::operator=( const Span& obj )
{
	// copying vector capacity count stored in obj
	_len = obj._len;
	
	// emptying all elements from this->_span vector 
	// before replacing with vector data from obj
	_span.clear();

	// setting this->span vector to have a capacity
	// that is >= obj._span
	_span.reserve(_len);

	// copying all elements from obj._span to this->_span
	if (obj._span.size())
		for (unsigned int i = 0; i < obj._span.size(); ++i)
			_span.push_back(obj._span.at(i));
	
	return *this;
}