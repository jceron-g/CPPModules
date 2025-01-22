/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:31:08 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/22 16:57:50 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook 	phonebook;
	Contact		contact;
	std::string	command;
	std::cout << "WELCOME TO PHONEBOOK" << std::endl;
	while(1)
	{
			std::cout << "TYPE ADD, MAQUINA" << std::endl;
			std::getline(std::cin, command);
			if(command == "ADD")
				phonebook.addContact();
			else if(command.empty())
				return (1);
	}
	return(0);
}