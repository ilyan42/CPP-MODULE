/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:20:28 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/06/19 19:33:16 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cctype>

class PhoneBook
{
	private:
		int	_index;
		Contact _contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Welcom_to_chat(void) const;
		void add(void);
		void exit(bool &running);
		void search(Contact contact[8]);
		
};

#endif