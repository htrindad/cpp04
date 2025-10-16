/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:53:16 by htrindad          #+#    #+#             */
/*   Updated: 2025/10/16 18:29:17 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"
#include "Cat.h"

#define MAX_LM 100

int main()
{
	Animal *tab[MAX_LM];
	Dog *dog[50];
	Cat *cat[50];
	
	tab[MAX_LM - 1] = NULL;
	dog[49] = NULL;
	cat[49] = NULL;
	std::cout << "creating cats\n";
	for (size_t i = 0; i < 50; i++)
		tab[i] = new Cat();
	std::cout << "\ncreating dogs\n";
	for (size_t i = 50; i < 100; i++)
		tab[i] = new Dog();
	std::cout << "\nmaking sounds\n";
	for (size_t i = 0; i < 100; i++)
		tab[i]->makeSound();
	std::cout << "\ndeleting everything";
	for (size_t i = 0; i < MAX_LM; i++)
		delete tab[i];
	std::cout << "\ncreating 50 dogs\n";
	for (size_t i = 0; i < 49; i++)
		dog[i] = new Dog();
	std::cout << "\ncreating 50 cats\n";
	for (size_t i = 0; i < 49; i++)
		cat[i] = new Cat();
	std::cout << "\nsetting ideas\n";
	for(size_t i = 0; i < 49; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			dog[i]->getBrain()->setIdea(j, "What a wonderful idea");
			cat[i]->getBrain()->setIdea(j, "What an awful idea");
		}
	}
	std::cout << "\nprinting all ideas\n";
	for (size_t i = 0; i < 49; i++)
	{
		for (size_t j = 0; j < 100; j++)
			std::cout
				<< dog[i]->getBrain()->getIdea(j) << '\n'
				<< cat[i]->getBrain()->getIdea(j) << '\n';
	}
	std::cout << "\nfinishing up\n";
	for (size_t i = 0; i < 49; i++)
	{
		delete dog[i];
		delete cat[i];
	}
}
