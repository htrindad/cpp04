/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:24:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/16 18:08:27 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

// CDO
Cat::Cat() : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat created\n";
}
Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed\n";
}
Cat::Cat(const Cat &ref)
{
	type = ref.type;
	std::cout << "Cat cloned\n";
}
Cat &Cat::operator=(const Cat &ref)
{
	type = ref.type;
	if (brain)
		delete brain;
	brain = new Brain(*ref.brain);
	std::cout << "Cat copied\n";
	return *this;
}

// Methods

void Cat::makeSound() const { std::cout << "MEOW!\n"; }

Brain *Cat::getBrain() const { return brain; }
