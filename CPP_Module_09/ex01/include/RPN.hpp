/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:31:30 by ilyanbendib       #+#    #+#             */
/*   Updated: 2024/10/29 18:45:54 by ilyanbendib      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	private :
	public :
		RPN();
		~RPN();
		RPN(RPN const &copy);
		RPN &operator=(RPN const &copy);
		int RPN_calculate(std::string str);
};

#endif