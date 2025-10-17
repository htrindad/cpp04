/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:10:16 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/16 18:10:17 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

// CDO
Brain::Brain() { std::cout << "Brain formed\n"; }
Brain::~Brain() { std::cout << "Brain deformed\n"; }
Brain::Brain(const Brain &ref)
{
	std::cout << "Brain copy constructor called\n";
	*this = ref;
}
Brain &Brain::operator=(const Brain &ref)
{
	std::cout << "Brain copy operator called\n";
	for (size_t i = 0; i < 100; i++)
		if (ref.ideas[i].empty())
			ideas[i] = ref.ideas[i];
	return *this;
}

// Methods
std::string Brain::getIdea(const int index) const { return ideas[index]; }

void Brain::setIdea(const int index, const std::string &idea) { ideas[index] = idea; }
