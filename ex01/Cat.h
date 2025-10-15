/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:16:28 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:41:59 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.h"

class Cat: virtual public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &ref);
		Cat &operator=(const Cat &ref);
		void makeSound() const;
};
