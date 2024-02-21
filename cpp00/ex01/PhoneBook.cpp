/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:33:49 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/20 16:51:19 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */) { this->_index = 8; }

PhoneBook::~PhoneBook() {}

void PhoneBook::checkLength(int size) {
  if (size >= 10)
    std::cout << ".\t\t| ";
  else
    std::cout << "\t\t| ";
}

void PhoneBook::printWholeContacts(void) 
{
  for (int i = 0; i < 8; i++) {
    std::cout << i << "\t\t| ";
    std::cout << std::setw(10) << _contact[i].getFirstName().substr(0, 10);
    checkLength(_contact[i].getFirstName().size());
    std::cout << std::setw(10) << _contact[i].getLastName().substr(0, 10);
    checkLength(_contact[i].getLastName().size());
    std::cout << std::setw(10) << _contact[i].getNickName().substr(0, 10);
    checkLength(_contact[i].getNickName().size());
    std::cout << std::endl;
  }
}

// void PhoneBook::addContacts(void) 
// {
//   // Contact contact;
//   if (this->_index == 8) {
//     this->_index = 0;
//     return;
//   }
//   // this->_contact[this->_index] = contact;
//   this->_index++;
// }

void PhoneBook::addInput(void) {
  if (this->_index == 8) {
    this->_index = 0;
  }
  Contact *contact = &_contact[_index];
  contact->setFirstName(checkInput("FirstName"));
  contact->setLastName(checkInput("LastName"));
  contact->setNickName(checkInput("NickName"));
  contact->setPhoneNumber(checkInput("PhoneNumber"));
  contact->setDarkestSecret(checkInput("DarkestSecret"));
  this->_index++;
}

int PhoneBook::checkPhoneNumber(string text) 
{
  if (text.empty()) 
  {
    std::cout << "Input is empty from num" << std::endl;
    std::cout << ">> ";
    return (1);
  }
  if (text.size() > 10) 
  {
    std::cout << "Error: Too many numbers" << std::endl;
    std::cout << ">> ";
    return (1);
  }
  for (size_t i = 0; i < text.size(); i++) 
  {
    if (isspace(text[i])) {

      std::cout << "Error: There are spaces" << std::endl;
      std::cout << ">> ";
      return (1);
    }
  }
  for (size_t i = 0; i < text.size(); i++) 
  {
    if (!isdigit(text[i])) {
      std::cout << "Error: They are not numbers" << std::endl;
      std::cout << ">> ";
      return (1);
    }
  }
  return (0);
}

int PhoneBook::checkName(string text) 
{
  if (text.empty()) 
  {
    std::cout << "Input is empty" << std::endl;
    std::cout << ">> ";
    return (1);
  }
  for (size_t i = 0; i < text.size(); i++) 
  {
    if (!isalpha(text[i]) && !isspace(text[i])) {
      std::cout << "Error: They are not letters" << std::endl;
      std::cout << ">> ";
      return (1);
    }
  }
  return (0);
}

int PhoneBook::checkDarkSecret(string text) 
{
  if (text.empty()) 
  {
    std::cout << "Input is empty" << std::endl;
    std::cout << ">> ";
    return (1);
  }
  for (size_t i = 0; i < text.size(); i++) 
  {
    if (!isprint(text[i])) 
    {
      std::cout << "Error: They are not printable characters" << std::endl;
      return (1);
    }
  }
  return (0);
}

string PhoneBook::checkInput(string message) 
{
  std::string input;

  std::cout << "Enter " << message << std::endl;
  std::cout << ">> ";
  std::cin.ignore();
  std::getline(std::cin, input);
  while (input.empty()) 
  {
    std::cout << "Input is empty" << std::endl;
    std::cout << ">> ";
    std::getline(std::cin, input); 
  }
  if (message == "PhoneNumber")
    while (checkPhoneNumber(input) == 1)
      std::getline(std::cin, input);
  else if (message == "FirstName" || message == "LastName")
  {
    while (checkName(input) == 1)
      {
        std::getline(std::cin, input);
        std::cout << "!test!" << std::endl;
      }
  }
  else if (message == "DarkestSecret" || message == "NickName")
    while (checkDarkSecret(input) == 1)
      std::getline(std::cin, input);
  return (input);
}
