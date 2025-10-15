/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:24:36 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:37:53 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

// CDO
Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created\n";
}
Cat::~Cat() { std::cout << "Cat destroyed\n"; }
Cat::Cat(const Cat &ref)
{
	type = ref.type;
	std::cout << "Cat cloned\n";
}
Cat &Cat::operator=(const Cat &ref)
{
	type = ref.type;
	std::cout << "Cat copied\n";
	return *this;
}

// Methods

void Cat::makeSound() { std::cout << "MEOW!\n"; }
