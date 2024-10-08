/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:13:25 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/07 15:25:15 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap claptrap;
	ScavTrap test;
	ScavTrap scavtrap;

	claptrap.attack("enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	std::cout << "ClapTrap Tests End" << std::endl << std::endl;
	scavtrap.attack("enemy2");
	scavtrap.guardGate();
	scavtrap.takeDamage(20);
	scavtrap.beRepaired(5);
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(15);
	test.guardGate();
	return (0);
}
