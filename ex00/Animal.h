/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:14:08 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:37:37 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal &ref);
		Animal &operator=(const Animal &ref);
		void makeSound();
		std::string getType() const;
};
