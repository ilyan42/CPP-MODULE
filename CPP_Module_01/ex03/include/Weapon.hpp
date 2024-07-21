/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:05:27 by ilbendib          #+#    #+#             */
/*   Updated: 2024/07/10 19:08:15 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private :
		std::string type;
	public :
		std::string const &getType(void);
		void setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};

#endif