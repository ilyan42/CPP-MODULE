/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:16:34 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/26 14:01:52 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nbZombies = 20;

	Zombie *zombies = zombieHorde(nbZombies, "Zombie");
	for (int i = 0; i < nbZombies; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}