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
	this->index = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::printWholeContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << "\t| ";
		std::cout << contact[i].getFirstName() << "\t| ";
		std::cout << contact[i].getLastName() << "\t| ";
		std::cout << contact[i].getPhoneNumber() << "\t|\n";
	}
}

void	PhoneBook::addContacts(void)
{
	Contact	contact;
	if (this->index == 8)
	{
		this->index = 0;
		return ;
	}
	this->contact[this->index] = contact;
	this->index++;
}

void	PhoneBook::addInput(void)
{
	Contact *contact = &contact[index];
	contact->setFirstName("FirstName");
	contact->setLastName("LastName");
	contact->setPhoneNumber("PhoneNumber");
	contact->setDarkestSecret("DarkestSecret");

}

string	checkInput(string message)
{
	std::string	str;

	std::cout << "Enter " << message << std::endl;
	std::cout << ">> ";
	getline(std::cin, str);
	while (str.empty())
	{
		std::cout << "Input is empty";
		std::cout << ">> ";
		getline(std::cin, str);
	}
	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
			std::cout << "" << std::endl;
	}
}
