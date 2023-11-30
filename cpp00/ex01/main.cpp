/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:47:08 by mukhairu          #+#    #+#             */
/*   Updated: 2023/11/30 22:11:31 by mukhairu         ###   ########.fr       */
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
	while (strcmp(input.c_str(), "EXIT") && strcmp(input.c_str(), "exit")
		&& input != "3")
		{
			std::cout << "Test" << std::endl;

			std::cout << "Input: ";
			std::cin >> input;
		}
	std::cout << "End Programme" << std::endl;
	return (0);
}
