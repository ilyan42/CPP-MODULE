/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:06:28 by ilbendib          #+#    #+#             */
/*   Updated: 2024/07/10 19:22:29 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private :
		Weapon &weapon;
		std::string name;
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif