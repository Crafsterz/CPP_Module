/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:33:49 by mukhairu          #+#    #+#             */
/*   Updated: 2023/12/04 21:40:59 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::printWholeContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << "\t| ";
		std::cout << _contact[i].getFirstName() << "\t| ";
		std::cout << _contact[i].getLastName() << "\t| ";
		std::cout << _contact[i].getPhoneNumber() << "\t|\n";
	}
}

void	PhoneBook::addContacts(void)
{
	Contact	contact;
	if (this->_index == 8)
	{
		this->_index = 0;
		return ;
	}
	this->_contact[this->_index] = contact;
	this->_index++;
}

void	PhoneBook::addInput(void)
{
	Contact *contact = &contact[_index];
	contact->setFirstName(checkInput("FirstName"));
	contact->setLastName(checkInput("LastName"));
	contact->setPhoneNumber(checkInput("PhoneNumber"));
	contact->setDarkestSecret(checkInput("DarkestSecret"));

}

std::string	checkInput(string message)
{
	std::string	str;
	// i = 0;
	// while ( i < 8) {
	// 	this->_contact.get
	// }
	std::cout << "Enter " << message << std::endl;
	std::cout << ">> ";
	getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "Input is empty";
		std::cout << ">> ";
		getline(std::cin, str);
	}
	if (message == "PhoneNumber")
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (isdigit(str[i]))
				std::cout << "" << std::endl;
			else 
				break ;	
		}
	}
	else
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (isalpha(str[i]))
				std::cout << "" << std::endl;
			else 
				break ;
		}
	}
}


