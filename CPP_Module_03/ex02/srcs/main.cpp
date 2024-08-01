/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:13:25 by ilbendib          #+#    #+#             */
/*   Updated: 2024/08/01 15:02:21 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ClapTrap claptrap;
	FragTrap fragtrap;

	claptrap.attack("enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	std::cout << "ClapTrap Tests End" << std::endl << std::endl;

	fragtrap.attack("enemy3");
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(5);
	
	return (0);
}
