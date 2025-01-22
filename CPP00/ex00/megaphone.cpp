/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:58:37 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/22 16:35:27 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i = 1;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j];
			j++;
		}
		i++;			
	}
	std::cout << std::endl;
}