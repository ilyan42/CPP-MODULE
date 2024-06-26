/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:05:27 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/26 15:10:17 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class weapon
{
	private :
		std::string type;
	public :
		std::string const &getType(void);
		void setType(std::string type);
		weapon(std::string type);
		~weapon();
};

#endif