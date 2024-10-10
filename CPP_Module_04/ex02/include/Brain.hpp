/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:34:21 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/08 17:37:04 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain 
{
	private :
		std::string ideas[100];
	public :
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		void setIdeas(std::string idea);
		void printIdeas(void);
};

#endif