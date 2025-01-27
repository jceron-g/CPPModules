/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:37:08 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/27 15:58:17 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde;

	if (N > 0)
	{
		horde = new Zombie[N];
		if (!horde)
			return (NULL);
		for (int i = 0; i < N; i++)
			horde[i].zombieName(name);
		return (horde);
	}
	else
	{
		std::cout << "YoUUuu CaanNNt TtTtYype 0 Or NeeEgGatTivEE ZombIEZZZZzzz" << std::endl;
		return (NULL);
	}
}