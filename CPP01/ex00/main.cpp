/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:55:59 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/24 15:54:45 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


int main(void)
{
	Zombie* zombie = newZombie("JOSE");
	zombie->announce();
	delete zombie;
	randomChump("Jask");
}
