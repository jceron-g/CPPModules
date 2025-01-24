/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:51:03 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/24 15:50:11 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{
	std::cout << "Default zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " deleted with default destructor." << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie name constructor called." << std::endl;
	this->name = name;
}

void Zombie :: zombieName(std::string name)
{
	this->name = name;
}

void Zombie :: announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
