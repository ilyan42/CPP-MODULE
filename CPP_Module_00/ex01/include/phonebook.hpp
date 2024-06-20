/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:20:28 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/06/20 19:02:26 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "header.hpp"
#include "contact.hpp"

class PhoneBook
{
	private:
		int	_index;
		int _current_index;
		Contact _contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int get_index(void);
		int get_current_index(void);
		int increment_index(void);
		void Welcom_to_chat(void) const;
		void add(void);
		void exit(bool &running);
		void search(void);
};

#endif