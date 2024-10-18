/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:10:36 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/18 17:14:15 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int nb;
	std::string *str;
};


class Serializer
{
	private :
		Serializer();
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &copy);
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif