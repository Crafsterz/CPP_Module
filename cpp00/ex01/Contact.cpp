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

std::string Contact::getName()
{
	return (this->name);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getEmailAddress()
 {
	return (this->emailAddress);
 }

std::string Contact::getNotes()
{
	return (this->notes);
}

void	Contact::setName(string newName)
{
	this->name = newName;
}

void	Contact::setPhoneNumber(string newPhoneNum)
{
	this->phoneNumber = newPhoneNum;
}

void	Contact::setEmailAddress(string newEmailAddr)
{
	this->emailAddress = newEmailAddr;
}

void	Contact::setNotes(string newNotes)
{
	this->notes = newNotes;
}
