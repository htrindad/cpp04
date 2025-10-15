/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:53:16 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:39:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"
#include "WrongDog.h"
#include "WrongCat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongCat();
	const WrongAnimal* y = new WrongDog();
	const WrongAnimal* z = new WrongAnimal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << x->getType() << " " << std::endl;
	std::cout << y->getType() << " " << std::endl;
	x->makeSound();
	y->makeSound();
	z->makeSound();

	delete meta;
	delete i;
	delete j;
	delete x;
	delete y;
	delete z;
}
