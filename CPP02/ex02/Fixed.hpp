/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:41 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/11 11:08:17 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	number;
	static const int bits = 8;
public:
	Fixed	();
	Fixed	(const Fixed &fix);
	Fixed	(const int number);
	Fixed	(const float number);
	~Fixed	();
	int 	toInt() const;
	float	toFloat() const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	Fixed 	&operator=(const Fixed &fix);
	Fixed 	operator*(const Fixed &fix) const;
	Fixed 	operator/(const Fixed &fix) const;
	Fixed 	operator+(const Fixed &fix) const;
	Fixed 	operator-(const Fixed &fix) const;
	bool	operator>=(const Fixed &fix)const;
	bool	operator>(const Fixed &fix)const;
	bool	operator<(const Fixed &fix)const;
	bool	operator<=(const Fixed &fix)const;
	bool	operator==(const Fixed &fix)const;
	bool	operator!=(const Fixed &fix)const;
	Fixed	operator++(void);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	static	const Fixed	&min(const Fixed &n1, const Fixed &n2);
	static	const Fixed	&max(const Fixed &n1, const Fixed &n2);
	static	const Fixed	&min(Fixed &n1, Fixed &n2);
	static	const Fixed	&max(Fixed &n1, Fixed &n2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif
