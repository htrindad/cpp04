/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:18:32 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:38:07 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.h"

class Dog: virtual public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &ref);
		Dog &operator=(const Dog &ref);
		void makeSound();
};
