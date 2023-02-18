/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:37:11 by euyi              #+#    #+#             */
/*   Updated: 2022/11/01 15:13:02 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	Animal	*obj[4];
	
	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			obj[i] = new Dog;
		else
			obj[i] = new Cat;
	}
	//[0] = Cat, [1] = Dog

	for (int i = 0; i < 4; i++)
	{
		delete obj[i];
	}
	
	// std::cout << "\n________NOW TESTING FOR DEEP COPY____________________" << std::endl;
	// Dog	a;
	// Dog b(a);
	
	// std::cout << "\nBrain Idea in object a" << std::endl;
	// a.echoBrainIdea();
	// std::cout << "\nBrain Idea in object b after copying from object a" << std::endl;
	// b.echoBrainIdea();

	// std::cout << "\n_____________DEEP COPY TEST________________________________" << std::endl;
	// Dog basic;
	// std::cout << "Before temp scope: ";
	// basic.makeSound();
	// std::cout << std::endl;
	// {
	// 	Dog tmp = basic;
	// 	std::cout << "Within temp scope: ";
	// 	tmp.makeSound();
	// 	std::cout << std::endl;
	// }
	// std::cout << "After temp scope: ";
	// basic.makeSound();
	// std::cout << std::endl;

	
	return 0;
}
