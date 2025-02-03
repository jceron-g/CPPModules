/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:53:48 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/03 18:10:57 by jceron-g         ###   ########.fr       */
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

static int levelToInt(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}
void Harl :: debug(void)
{	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
}
void Harl :: info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}
void Harl :: warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}
void Harl :: error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void Harl :: complain(std::string level)
{	
	int message = levelToInt(level);
	switch (message)
	{
		case 0:
		{
			this->debug();
			std::cout << std::endl;
			break;
		}
		case 1:
		{
			this->info();
			std::cout << std::endl;
			break;
		}
		case 2:
		{
			this->warning();
			std::cout << std::endl;
			break;
		}
		case 3:
		{
			this->error();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "Error: Write a correct level: DEBUG | INFO | WARNING | ERROR" << std::endl;
	}	
}

