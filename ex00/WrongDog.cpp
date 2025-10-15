/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:24:54 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:27:35 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.h"

// CDO
WrongDog::WrongDog()
{
	type = "WrongDog";
	std::cout << "WrongDog created\n";
}
WrongDog::~WrongDog() { std::cout << "WrongDog incinerated\n"; }
WrongDog::WrongDog(const WrongDog &ref)
{
	type = ref.type;
	std::cout << "WrongDog cloned\n";
}
WrongDog &WrongDog::operator=(const WrongDog &ref)
{
	type = ref.type;
	std::cout << "WrongDog copied\n";
	return *this;
}
