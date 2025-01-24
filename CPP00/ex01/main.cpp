/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:31:08 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/23 16:41:42 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook 	phonebook;
	std::string	command;
	std::cout << "Welcome to jceron-g's PhoneBook!" << std::endl;
	while(1)
	{
			std::cout << "Type one of the following commands: ADD | SEARCH | EXIT" << std::endl;
			std::getline(std::cin, command);
			if(std::cin.eof() || !std::cin.good())
				return(1);
			if(command == "ADD")
				phonebook.addContact();
			else if(command == "SEARCH")
				phonebook.searchContact();
			else if(command == "EXIT")
			{
				std::cout << "Thanks for using jceron-g's PhoneBook!" << std::endl;
				return (1);
			}
			else if(command.empty())
				return (1);
	}
	return(0);
}