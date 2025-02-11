/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:36 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/11 11:17:12 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORES Y DESTRUCTORES*/

Fixed::Fixed() : number(0)
{
}

Fixed::Fixed(const Fixed &fix)
{
	this->number = fix.number;
}


Fixed :: Fixed(const int number) : number(number << bits)
{	
}

Fixed :: Fixed (const float number)
{
	this->number = roundf(number * (1 << bits));
}

Fixed::~Fixed()
{
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
	return (this->number);
}

void Fixed :: setRawBits(int const raw)
{
	this->number = raw;
}

/*SOBRECARGA DE OPERADORES*/
Fixed &Fixed :: operator=(const Fixed &fix)
{
	if (this != &fix)
		this->number = fix.number;
	return (*this);
	
}

/*OPERADORES ARITMETICOS*/

Fixed Fixed :: operator*(const Fixed &fix) const
{
	Fixed result;
	result.setRawBits((this->number * fix.number) >> bits);
	return (result);
}

Fixed Fixed :: operator+(const Fixed &fix) const
{
	Fixed result;
	result.setRawBits((this->number + fix.number));
	return (result);
}

Fixed Fixed :: operator-(const Fixed &fix) const
{
	Fixed result;
	result.setRawBits((this->number - fix.number));
	return (result);
}

Fixed Fixed :: operator/(const Fixed &fix) const
{
	if (fix.number == 0)
	{
		std::cout << "Impossible divide by zero." << std::endl;
		return(0);
	}
	Fixed result;
	result.setRawBits(((this->number << bits)/ fix.number));
	return (result);
}

/*OPERADORES BOOLEANOS*/

bool Fixed :: operator>(const Fixed &fix)const
{
	if(this->getRawBits() > fix.getRawBits())
		return(true);
	return(false);
}

bool Fixed :: operator<(const Fixed &fix)const
{
	if(this->getRawBits() < fix.getRawBits())
		return(true);
	return(false);
}

bool Fixed :: operator>=(const Fixed &fix)const
{
	if(this->getRawBits() >= fix.getRawBits())
		return(true);
	return(false);
}

bool Fixed :: operator<=(const Fixed &fix)const
{
	if(this->getRawBits() <= fix.getRawBits())
		return(true);
	return(false);
}

bool Fixed :: operator==(const Fixed &fix)const
{
	if(this->getRawBits() == fix.getRawBits())
		return(true);
	return(false);
}

bool Fixed :: operator!=(const Fixed &fix)const
{
	if(this->getRawBits() != fix.getRawBits())
		return(true);
	return(false);
}

/*OPERADORES DE INCREMENTO/DECREMENTO*/

Fixed Fixed :: operator++()
{
	this->number++;
	return (*this);
}

Fixed Fixed :: operator--()
{
	this->number--;
	return (*this);
}

Fixed Fixed :: operator++(int)
{
	Fixed temp = *this;
	this->number++;
	return(temp);
}

Fixed Fixed :: operator--(int)
{
	Fixed temp = *this;
	this->number--;
	return(temp);
}
/*FUNCIONES MINMAX*/

const Fixed &Fixed :: min(const Fixed &n1, const Fixed &n2)
{
	if(n1 < n2)
		return (n1);
	return(n2);
}

const Fixed &Fixed :: max(const Fixed &n1, const Fixed &n2)
{
	if(n1 > n2)
		return (n1);
	return(n2);
}

const Fixed &Fixed :: min(Fixed &n1, Fixed &n2)
{
	if(n1 < n2)
		return (n1);
	return(n2);
}

const Fixed &Fixed :: max(Fixed &n1, Fixed &n2)
{
	if(n1 > n2)
		return (n1);
	return(n2);
}

std::ostream &operator <<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}