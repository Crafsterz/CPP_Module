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
// #include "PhoneBook.hpp"
#include <iostream>
using std::string;

int	main(void)
{
	string	input;
	// PhoneBook	phonebook;

	input = "";
	while (input != "EXIT" && input !=  "exit")
	{
		if (input == "ADD" && input == "add")
			std::cout << "add" << std::endl;
			//getInput
		else if (input == "PRINT" && input == "print")
			std::cout << "Print" << std::endl;
			//printWholeContacts
		else
		{
			std::cout << "Type 'ADD' to add new contacts" << std::endl;
			std::cout << "Type 'PRINT' to display all the contacts" << std::endl;
			std::cout << "Type 'EXIT' to end the program" << std::endl;
		}
		std::cout << "Input: ";
		std::cin >> input;
	}
	std::cout << "End Programme" << std::endl;
	return (0);
}
