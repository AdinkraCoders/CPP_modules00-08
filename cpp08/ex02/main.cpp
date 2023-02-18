/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:29:28 by euyi              #+#    #+#             */
/*   Updated: 2023/01/13 19:07:38 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main(void)
{
	MutantStack<char>	arr;
	typedef MutantStack<char>::iterator _IT ;
	
	arr.push('a');
	arr.push('b');
	arr.push('c');
	arr.push('d');
	arr.push('e');

	for ( _IT it = arr.begin(); it != arr.end(); ++it )
		std::cout << *it << std::endl;
		
	
	std::cout << "Top element: " << arr.top() << std::endl;
	
	std::cout << "isEmpty " << std::boolalpha << arr.empty() << std::endl;

	return(0);
}

// PROJECT EXAMPLE
// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }


// PROJECT EXAMPLE replacing the MutantStack with, for example, a std::list,9
// #include <list>
// int main()
// {
// 	std::list<int> mstack;
	
// 	mstack.push_front(5);
// 	mstack.push_front(17);
// 	std::cout << mstack.front() << std::endl;
// 	mstack.pop_front();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_front(3);
// 	mstack.push_front(5);
// 	mstack.push_front(737);
// 	//[...]
// 	mstack.push_front(0);
	
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }
