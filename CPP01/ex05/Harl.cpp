/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:53:48 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/28 13:05:59 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl :: Harl()
{
	return ;
}

Harl :: ~Harl()
{
	return ;
}

void Harl :: debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl :: info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl :: warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl :: error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl :: complain(std::string level)
{
	std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	function functionPointer[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
		{
			(this->*functionPointer[i])();
			return;
		}
	}
	std::cout << "Please write a correct message: DEBUG | INFO | WARNING | ERROR" << std::endl;
}

