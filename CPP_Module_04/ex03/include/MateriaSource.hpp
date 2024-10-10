/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:10:23 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 16:11:58 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _source[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & copy);
		MateriaSource& operator=(MateriaSource const & copy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif