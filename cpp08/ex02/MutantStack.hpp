/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:27:30 by euyi              #+#    #+#             */
/*   Updated: 2023/01/13 19:11:53 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>
# include <vector>
# include <iomanip>

template <typename T>
class	MutantStack : public std::stack<T> {
private:

public:
	void	push(T x);
	void	pop( void );
	T		top( void ) const;

	// This is a sort of mask to make creation of MutantStack::iterator variable
	// possible without having to go through std::stack<T>::container_type::iterator 
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

	MutantStack( void );
	~MutantStack( void );
	MutantStack( const MutantStack& obj );
	
	MutantStack& operator=( const MutantStack& obj );
};

// .tpp files(an extension of .hpp to improve readability
// of the .hpp) is where you put the implementations
// of functions of a templated class because putting
// them in .cpp will create too many headaches
#include "MutantStack.tpp"

#endif
