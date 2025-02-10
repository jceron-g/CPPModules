/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:44 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/10 17:39:42 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) - Fixed(2));
	//std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	std::cout << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}