/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:49:43 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/22 15:40:17 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	secretWord;
public:
	Contact();
	~Contact();

	std::string getName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getSecretWord();
	void		setName(std::string name);
	void		setLastName(std::string name);
	void		setNickName(std::string name);
	void		setPhoneNumber(std::string name);
	void		setSecretWord(std::string name);
};
#endif

