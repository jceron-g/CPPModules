/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:08:20 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/24 19:44:28 by jceron-g         ###   ########.fr       */
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

void Zombie::zombieName(std::string name)
{
	this->name = name;
}

void Zombie :: announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}