/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:33:49 by mukhairu          #+#    #+#             */
/*   Updated: 2023/11/30 21:39:47 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
	this->contIndex = 8;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::printWholeContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << "Name: " << contact[i].getName() << std::endl;
		std::cout << "Number: " << contact[i].getPhoneNumber() << std::endl;
		std::cout << "Email Address: " << contact[i].getEmailAddress() << std::endl;
		std::cout << "Notes: " << contact[i].getNotes() << std::endl;
	}
}

void	PhoneBook::addContacts(Contact contact)
{
	if (this->contIndex == 8)
		this->contIndex = 0;
	this->contact[this->contIndex] = contact;
	this->contIndex++;
}

string	getInput(string input)
{
	
}
