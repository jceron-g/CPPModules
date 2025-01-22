/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:49:09 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/22 16:57:18 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void PhoneBook :: addContact()
{
	std::string name;
	while(name.empty())
	{
		std::cout << "Please write a first name" << std::endl;
		std::getline(std::cin, name);
		if(std::cin.eof() || !std::cin.good())
		return ;
	}
}