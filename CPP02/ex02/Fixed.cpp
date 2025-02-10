/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:36 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/06 15:54:00 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORES Y DESTRUCTORES*/

Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = fix.number;
}


Fixed :: Fixed(const int number) : number(number << bits)
{
	std::cout << "Int constructor called" << std::endl;	
}

Fixed :: Fixed (const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(number * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* METODOS DE LA CLASE*/

int Fixed::toInt() const
{
	return (this->number >> bits);
}

float Fixed::toFloat() const
{
	return ((float)this->number / (1 << bits));
}

int	Fixed :: getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed :: setRawBits(int const raw)
{
	this->number = raw;
}

/*SOBRECARGA DE OPERADORES*/
Fixed &Fixed :: operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->number = fix.number;
	return (*this);
	
}

Fixed Fixed :: operator*(const Fixed &fix) const
{
	Fixed result;
	result.setRawBits((this->number * fix.number) >> bits);
	return (result);
}

std::ostream &operator <<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}