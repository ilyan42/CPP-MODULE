/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:39:26 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 16:44:14 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
	public :
		Character(std::string name);
		~Character();
		Character(Character const & copy);
		Character& operator=(Character const & copy);
		std::string const & getName() const;
		void equip(AMateria* m);
		void use(int idx, ICharacter& target);
		void unequip(int idx);
};

#endif