/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:17:23 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:32:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

// CDO
WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "A WrongCat has immerged.\n";
}
WrongCat::~WrongCat() { std::cout << "A WrongCat has disappeared"; }
WrongCat::WrongCat(const WrongCat &ref)
{
	type = ref.type;
	std::cout << "WrongCat cloned\n";
}
WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	type = ref.type;
	std::cout << "WrongCat copied\n";
	return *this;
}
