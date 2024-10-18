/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:44:45 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 18:20:08 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	int random_number = (rand() % 3) + 1;
	if (random_number == 1)
		return new A;
	if (random_number == 2)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Type inconnu" << std::endl;
	}
}

void identify(Base& p)
{
	Base &test = p;
	try
	{
		test = dynamic_cast<A&>(p);
		std::cout << "le type de p est A" << std::endl;
	}
	catch(std::exception & e){}
	try
	{
		test = dynamic_cast<B&>(p);
		std::cout << "le type de p est B" << std::endl;
	}
	catch(std::exception & e){}
	try
	{
		test = dynamic_cast<C&>(p);
		std::cout << "le type de p est C" << std::endl;
	}
	catch(std::exception & e){}
}