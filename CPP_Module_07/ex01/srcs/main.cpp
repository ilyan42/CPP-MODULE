/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:12:32 by ilbendib          #+#    #+#             */
/*   Updated: 2024/10/24 18:25:00 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/iter.hpp"

// template< typename T >
// void print( T& x )
// {
// 	std::cout << x << std::endl;
// 	return;
// }

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 };

// 	iter( tab, 5, print<int> );
// 	iter( tab, 5, print<const int> );
// 	return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}