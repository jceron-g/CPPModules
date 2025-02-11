/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:36:57 by jceron-g          #+#    #+#             */
/*   Updated: 2025/02/11 17:17:06 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap " << this->name << " constructed correctly" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "ClapTrap" << this->name << " assigned from" << other.name << std::endl;
	return(*this);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copied from" << other.name << std::endl;
	*this = other;
} 

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructed correctly" << std::endl;
}

void ClapTrap :: attack(const std::string &target)
{
	if(energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage<< " points of damage!" << std::endl;
		energyPoints -= 1;
	}
	else
	{
		if (energyPoints <= 0 || hitPoints <= 0)
			std::cout << "ClapTrap" << name << "does not have energy or hit points left!" << std::endl;
		else if (energyPoints <= 0)
			std::cout << "ClapTrap" << name << "does not have any energy left!" << std::endl;
		else if (hitPoints <= 0)
			std::cout << "ClapTrap" << name << "does not have any hit points left!" << std::endl;
	}
}