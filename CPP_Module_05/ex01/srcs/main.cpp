/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:20:22 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/21 18:34:05 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <ostream>
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat a("a", 15);
        Bureaucrat b("b", 24);
        Bureaucrat c("c", 23);
        Bureaucrat d("d", 1);
        Form f("f", 15, 20);

        std::cout << f;
        a.signForm(f);
        std::cout << b;
        b.signForm(f);
        std::cout << c;
        c.signForm(f);
        std::cout << d;
        d.signForm(f);

        b.decrementGrade();
        a.incrementGrade();

    }
    catch (std::exception & e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }
}
