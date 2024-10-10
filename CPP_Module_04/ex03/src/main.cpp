/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:56:31 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 18:24:37 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	
	AMateria* Item_index0; //creation des item qui seront dans mon inventaire
	AMateria* Item_index1;
	AMateria* Item_index2;
	AMateria* Item_index3;
	AMateria* Item_index4;
	
	Item_index0 = src->createMateria("ice");
	me->equip(Item_index0);
	Item_index1 = src->createMateria("cure");
	me->equip(Item_index1);
	Item_index2 = src->createMateria("ice");
	me->equip(Item_index2);
	Item_index3 = src->createMateria("cure");
	me->equip(Item_index3);
	Item_index4 = src->createMateria("cure");
	me->equip(Item_index4);
	
	ICharacter* bob = new Character("bob");
	
	me->unequip(2);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	delete Item_index2;
	delete bob;
	delete me;
	delete src;
	return 0;
}