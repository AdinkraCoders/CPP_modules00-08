/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:08:11 by euyi              #+#    #+#             */
/*   Updated: 2023/01/13 18:58:39 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The standard stack.push(x) puts x at the 
// end of the linear-arranged data.
// This custom MutantStack.push(x) puts x at
// the beginning for easier incrementation and 
// decrementation through its iterator according
// to the FILO data method used by STACK container
template<typename T>
void	MutantStack<T>::push(T x)
{
	this->c.push_front(x);		
}

// The standard stack.pop() pop erases the element at the
// end of the linear-arranged data.
// This custom MutantStack.pop()erases the element 
// at the beginning 
template<typename T>
void	MutantStack<T>::pop()
{
	this->c.pop_front();		
}

// The standard stack.top() returns the element at the
// end of the linear-arranged data.
// This custom MutantStack.top() returns the element 
// at the beginning 
template<typename T>
T	MutantStack<T>::top() const
{
	return this->c.front();		
}
	
template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& obj) {
    *this = obj;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& obj) {
    if (this != &obj) 
		std::stack<T>::operator=(obj);
    return *this;
}

