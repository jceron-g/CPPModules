/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:37:08 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/24 20:02:08 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N > 0)
    {
        Zombie *horde = new Zombie[N];
        for(int i = 0; i < N; i++)
            horde[i].zombieName(name);
        return (horde);
    }
    std::cout << "YoUUuu CaanNNt TtTtYype 0 Or NeeEgGatTivEE ZombIEZZZZzzz" << std::endl;
    return(NULL);
}