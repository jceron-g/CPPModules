/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:44 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/05 17:01:40 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer." << std::endl;
	std::cout << "b is " << b.toInt() << " as integer." << std::endl;
	std::cout << "c is " << c.toInt() << " as integer." << std::endl;
	std::cout << "d is " << d.toInt() << " as integer." << std::endl;
/* 	std::cout << "a is " << a.toFloat() << " as float." << std::endl;
	std::cout << "b is " << b.toFloat() << " as float." << std::endl;
	std::cout << "c is " << c.toFloat() << " as float." << std::endl;
	std::cout << "d is " << d.toFloat() << " as float." << std::endl; */

	return (0);
}