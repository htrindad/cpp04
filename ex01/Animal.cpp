/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:19:54 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:41:45 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

// CDO
Animal::Animal()
{
	type = "Default animal";
	std::cout << "Standard animal created\n";
}
Animal::~Animal() { std::cout << "Animal deletedn\n"; }
Animal::Animal(const Animal &ref)
{
	type = ref.type;
	std::cout << "Animal cloned\n";
}
Animal &Animal::operator=(const Animal &ref)
{
	type = ref.type;
	std::cout << "Animal copied\n";
	return *this;
}

// Methods

void Animal::makeSound() const { std::cout << "unknown animal makes a sound\n"; }

std::string Animal::getType() const { return type; }
