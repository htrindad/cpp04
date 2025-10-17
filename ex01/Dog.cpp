/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:49:19 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/17 14:45:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

// CDO
Dog::Dog() : Animal(), brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog created\n";
}
Dog::~Dog()
{
	std::cout << "Dog deleted\n"; 
	delete brain;
}
Dog::Dog(const Dog &ref)
{
	type = ref.type;
	std::cout << "Dog cloned\n";
}
Dog &Dog::operator=(const Dog &ref)
{
	type = ref.type;
	if (brain)
		delete brain;
	brain = new Brain(*ref.brain);
	std::cout << "Dog copied\n";
	return *this;
}

// Methods

void Dog::makeSound() const { std::cout << "WOOOF!\n"; }

Brain *Dog::getBrain() const { return brain; }
