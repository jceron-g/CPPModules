/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:01:42 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/28 13:04:59 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl level;

	if (argc != 2)
	{
		std::cout << "Please write only two arguments" << std::endl;
		return(1);
	}
	level.complain(argv[1]);
	return(0);		
}