/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:44:30 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 17:47:43 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain operator= called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

void Brain::setIdeas(std::string idea)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
}
void Brain::printIdeas(void)
{
	int i = 0;

	while(i < 100)
	{
		std::cout << "idea " << i << ": " << this->ideas[i] << std::endl;
		i++;
	}
}

