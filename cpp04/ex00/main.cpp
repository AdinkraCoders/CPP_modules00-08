/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:37:11 by euyi              #+#    #+#             */
/*   Updated: 2022/10/28 17:15:31 by euyi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << meta->getType() << " is for meta " << std::endl;
	std::cout << j->getType() << " is for d " << std::endl;
	std::cout << i->getType() << " is for c " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	// const WrongAnimal* w = new WrongCat();
	// w->makeSound(); //will output the wronganimal sound!
	// delete w;
	
	return 0;
}
