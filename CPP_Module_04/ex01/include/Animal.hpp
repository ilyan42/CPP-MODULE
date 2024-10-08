/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:36:13 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 16:32:41 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string type;
	public :
		Animal();
		~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif