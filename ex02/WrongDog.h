/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:23:14 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/15 16:24:32 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.h"

class WrongDog: virtual public WrongAnimal
{
	public:
		WrongDog();
		~WrongDog();
		WrongDog(const WrongDog &ref);
		WrongDog &operator=(const WrongDog &ref);
};
