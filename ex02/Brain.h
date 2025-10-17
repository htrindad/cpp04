/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:06:43 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/16 17:59:18 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &ref);
		Brain &operator=(const Brain &ref);
		std::string getIdea(const int index) const;
		void setIdea(const int index, const std::string &idea);
};
