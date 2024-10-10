/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:50:54 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 18:54:13 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "constructor Cat called" << std::endl;
	this->type = "cat";
	this->brain = new Brain();
	this->brain->setIdeas("I'm a cat");
}

Cat::~Cat()
{
	std::cout << "destructor Cat called" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "copy constructor called" << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
	this->brain->setIdeas("Cat Ideas");
	*this = other;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "operator asignation called" << std::endl;
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "the " << type << " meows" << std::endl;
}

void Cat::printIdeas(void)
{
	this->brain->printIdeas();
}

void Cat::setIdeas(std::string ideas)
{
	brain->setIdeas(ideas);
}