/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:47:08 by mukhairu          #+#    #+#             */
/*   Updated: 2023/12/04 18:54:36 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include "PhoneBook.hpp"
#include <iostream>
using std::string;

int	main(void)
{
	string	input;
	PhoneBook	phonebook;

	input = "";
	while (input != "EXIT")
	{
		if (input == "ADD")
    {
			std::cout << "add" << std::endl;
      phonebook.addInput();
      phonebook.addContacts(); 
    }
		else if (input == "SEARCH")
		{
			std::cout << "search" << std::endl;
			std::cout << "Index\t| First Name\t | Last Name\t | Nickname\t" << std::endl;
			//printWholeContacts
		}
		else
		{
			std::cout << "Type 'ADD' to add new contacts" << std::endl;
			std::cout << "Type 'SEARCH' to display all the contacts" << std::endl;
			std::cout << "Type 'EXIT' to end the program" << std::endl;
		}
		std::cout << "Input: ";
		std::cin >> input;
	}
	std::cout << "End Programme" << std::endl;
	return (0);
}
