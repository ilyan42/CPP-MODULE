/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:55:51 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 18:40:46 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "constructor Dog called" << std::endl;
	this->type = "dog";
	this->brain = new Brain();
	this->brain->setIdeas("I'm a dog");
}

Dog::~Dog()
{
	std::cout << "destructor Dog called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "constructor Dog called" << std::endl;
	this->type = "dog";
	this->brain = new Brain();
	this->brain->setIdeas("Dog Ideas");
	*this = other;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "operator asignation called" << std::endl;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "the " << type << " barks" << std::endl;
}

void Dog::printIdeas(void)
{
	this->brain->printIdeas();
}

void Dog::setIdeas(std::string ideas)
{
	brain->setIdeas(ideas);
}