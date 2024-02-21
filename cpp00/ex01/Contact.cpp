/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:09:40 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/20 16:51:08 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(/* args */)
{}

Contact::~Contact()
{}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
  return (this->nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
 {
	return (this->darkestSecret);
 }

void	Contact::setFirstName(string newFirstName)
{
	this->firstName = newFirstName;
}

void	Contact::setLastName(string newLastName)
{
	this->lastName = newLastName;
}

void	Contact::setNickName(string newNickName)
{
  this->nickName = newNickName;
}

void	Contact::setPhoneNumber(string newPhoneNum)
{
	this->phoneNumber = newPhoneNum;
}

void	Contact::setDarkestSecret(string newDarkestSecret)
{
	this->darkestSecret = newDarkestSecret;
}
