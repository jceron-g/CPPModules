/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:49:09 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/27 10:29:23 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	currentIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	Contact contact;
	std::string input;

	while (input.empty())
	{
		std::cout << "Please write a first name." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
		{
			return;
		}
	}
	contact.setName(input);
	input.clear();

	while (input.empty())
	{
		std::cout << "Please write a last name." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			return;
	}
	contact.setLastName(input);
	input.clear();

	while (input.empty())
	{
		std::cout << "Please write a phone number." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			return;
	}
	contact.setPhoneNumber(input);
	input.clear();

	while (input.empty())
	{
		std::cout << "Please write a nickname." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			return;
	}
	contact.setNickName(input);
	input.clear();

	while (input.empty())
	{
		std::cout << "Please write your darkest secrets." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof() || !std::cin.good())
			return;
	}
	contact.setSecretWord(input);
	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
}

std::string PhoneBook::formatField(std::string field)
{
	if (field.length() > 10)
	{
		return (field.substr(0, 9) + ".");
	}
	else
	{
		while (field.length() < 10)
		{
			field = " " + field;
		}
		return (field);
	}
}

static int ft_stoi(const std::string& str)
{
	int i = 0;
	int res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

void PhoneBook::searchContact()
{
	std::string input;
	int index;

	std::cout << "| Index | First Name | Last Name | Nickname |" << std::endl;
	std::cout << "| ----------------------------------------- |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].getName().empty())
		{
			std::cout << "|"
					  << std::setw(10) << i << "|"
					  << formatField(contacts[i].getName()) << "|"
					  << formatField(contacts[i].getLastName()) << "|"
					  << formatField(contacts[i].getNickName()) << "|"
					  << std::endl;
		}
	}

	std::cout << "Enter the index of the contact to display: ";
	std::getline(std::cin, input);
	index = ft_stoi(input);
	if (index < 0 || index >= 8 || contacts[index].getName().empty())
	{
		std::cout << "Invalid index or no contact at this index." << std::endl;
		return;
	}

	std::cout << "Contact details:" << std::endl;
	std::cout << "First Name: " << contacts[index].getName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getSecretWord() << std::endl;
}
