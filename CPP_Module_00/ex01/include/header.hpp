/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:38:38 by ilbendib          #+#    #+#             */
/*   Updated: 2024/06/20 14:33:29 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <cstdlib>
#include <limits>

class PhoneBook;
class Contact;

#include "phonebook.hpp"
#include "contact.hpp"

std::string formatString(const std::string& str);
std::string intToString(int number);

#endif
