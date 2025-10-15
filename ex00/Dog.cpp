/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:49:19 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:38:10 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

// CDO
Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created\n";
}
Dog::~Dog() { std::cout << "Dog deleted\n"; }
Dog::Dog(const Dog &ref)
{
	type = ref.type;
	std::cout << "Dog cloned\n";
}
Dog &Dog::operator=(const Dog &ref)
{
	type = ref.type;
	std::cout << "Dog copied\n";
	return *this;
}

// Methods

void Dog::makeSound() { std::cout << "WOOOF!"; }
