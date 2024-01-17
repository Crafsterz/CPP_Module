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

void  PhoneBook::checkLength(int size)
{
  if (size > 10)
    std::cout << ".\t";
  else
    std::cout << "\t";
}

void	PhoneBook::printWholeContacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << "\t| ";
		std::cout << _contact[i].getFirstName().substr(0, 10);
    checkLength(_contact[i].getFirstName().size());
		std::cout << _contact[i].getLastName().substr(0, 10);
    checkLength(_contact[i].getLastName().size());
    std::cout << _contact[i].getNickName().substr(0, 10);
    checkLength(_contact[i].getNickName().size());
		std::cout << _contact[i].getPhoneNumber().substr(0, 10);
    checkLength(_contact[i].getFirstName().size());
    std::cout << std::endl;
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
  contact->setNickName(checkInput("NickName"));
	contact->setPhoneNumber(checkInput("PhoneNumber"));
	contact->setDarkestSecret(checkInput("DarkestSecret"));

}


int	checkPhoneNumber(string text)
{
	if (text.size() > 10)
  {
    std::cout << "Error: Too many numbers\n";
		return (1);
  }
	for (int i = 0; i < text.size(); i++)
	{
		if (isspace(text[i]))
    {
      
      std::cout << "Error: There are spaces\n";
			return (1);
    }
	}
	for (int i = 0; i < text.size(); i++)
	{
		if (!isdigit(text[i]))
    {
      std::cout << "Error: They are not numbers\n";
			return (1);
    }
	}
	return (0);
}

int checkName(string text)
{
	for (int i = 0; i < text.size(); i++)
	{
		if (!isalpha(text[i]))
    {
      std::cout << "Error: They are not letters\n";  
			return (1);
    }
	
	}
	return (0);
}

int	checkDarkSecret(string text)
{
	for (int i = 0; i < text.size(); i++)
	{
		if (!isprint(text[i]))
    {
      std::cout << "Error: They are not printable characters\n";
			return (1);
    }
		
	}
	return (0);
}

string	checkInput(string message)
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
		while (checkPhoneNumber(str) == 1);
	else if (message == "FirstName" || message == "LastName")
    while (checkName(str) == 1);
  else if (message == "DarkestSecret" || message == "NickName")
    while (checkDarkSecret(str) == 1);
	return (str);
	// {
		// for (int i = 0; i < str.size(); i++)
		// {
		// 	if (isalpha(str[i]))
		// 		std::cout << "" << std::endl;
		// 	else 
		// 		break ;
		// }
	// }
}
