/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:49:41 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/06 15:17:39 by jceron-g         ###   ########.fr       */
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
	Fixed();
	Fixed(const Fixed &fix);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();
	Fixed &operator=(const Fixed &fix);
	Fixed operator*(const Fixed &fix) const;
	int 	toInt() const;
	float	toFloat() const;
	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif
