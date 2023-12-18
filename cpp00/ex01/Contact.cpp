/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:09:40 by mukhairu          #+#    #+#             */
/*   Updated: 2023/11/30 21:33:27 by mukhairu         ###   ########.fr       */
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

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getEmailAddress()
 {
	return (this->emailAddress);
 }

void	Contact::setFirstName(string newFirstName)
{
	this->firstName = newFirstName;
}

void	Contact::setLastName(string newLastName)
{
	this->lastName = newLastName;
}

void	Contact::setPhoneNumber(string newPhoneNum)
{
	this->phoneNumber = newPhoneNum;
}

void	Contact::setEmailAddress(string newEmailAddr)
{
	this->emailAddress = newEmailAddr;
}
