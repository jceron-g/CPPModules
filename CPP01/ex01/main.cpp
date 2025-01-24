/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:52:55 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/24 20:23:48 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *horde;
    int     N;
    
    N = 6;
    horde = zombieHorde(N, "Jose");
    for(int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
}