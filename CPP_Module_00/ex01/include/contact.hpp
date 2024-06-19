/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:36:09 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/19 18:32:16 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public :
		void get_first_name(void) const;
		void get_last_name(void) const;
		void get_nickname(void) const;
		void get_phone_number(void) const;
		void get_darkest_secret(void) const;
		void init_contact(void);
		Contact(void);
		~Contact(void);
};

#endif