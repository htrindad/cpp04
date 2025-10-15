/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:11:27 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:42:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

// CDO
WrongAnimal::WrongAnimal()
{
	type = "Wrong Animal";
	std::cout << "Wrong Animal created\n";
}
WrongAnimal::~WrongAnimal() { std::cout << "Wrong animal incinerated\n"; }
WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	type = ref.type;
	std::cout << "Wrong animal cloned\n";
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	type = ref.type;
	std::cout << "Wrong animal copied\n";
	return *this;
}

// Methods

void WrongAnimal::makeSound() const { std::cout << "unknown wrong noise\n"; }

std::string WrongAnimal::getType() const { return type; }
