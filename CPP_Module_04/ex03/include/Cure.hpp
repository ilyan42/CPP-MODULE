/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:07:44 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/09 16:41:00 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const & copy);
		Cure& operator=(Cure const & copy);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif