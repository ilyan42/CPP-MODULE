/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_string.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:52:52 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/07/10 19:53:23 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.hpp"

std::string replace_string(std::string str, std::string to_replace, std::string replace_with)
{
	size_t pos = 0;
	while ((pos = str.find(to_replace, pos)) != std::string::npos)
	{
		str.replace(pos, to_replace.length(), replace_with);
		pos += replace_with.length();
	}
	return str;
}