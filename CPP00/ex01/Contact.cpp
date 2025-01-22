/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:49:11 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/22 15:59:16 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

std::string Contact :: getName()
{
	return (firstName);
}

std::string Contact :: getLastName()
{
	return(lastName);
}

std::string Contact :: getNickName()
{
	return(nickName);
}

std::string Contact :: getPhoneNumber()
{
	return(phoneNumber);
}

std::string Contact :: getSecretWord()
{
	return(secretWord);
}

void Contact :: setName(std::string name)
{
	this->firstName = name;
}

void Contact :: setLastName(std::string name)
{
	this->lastName = name;
}

void Contact :: setNickName(std::string name)
{
	this->nickName = name;
}

void Contact :: setPhoneNumber(std::string name)
{
	this->phoneNumber = name;
}

void Contact :: setSecretWord(std::string name)
{
	this->secretWord = name;
}