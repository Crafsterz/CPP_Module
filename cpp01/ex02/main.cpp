/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:21:41 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/22 13:42:13 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(void)
{
	string brain = "HI THIS IS BRAIN";
	string	*stringPTR = &brain;
	string	&stringREF = brain;

	cout << "---brain's memory address---" << endl;
	//memory address of the string variable
	cout << "original memory address: " << &brain << endl;
	//the value pointed to stringPTR
	cout << "pointed memory address from stringPTR: " << stringPTR << endl;
	//the value pointed to stringREF
	cout << "pointed memory address from stringREF: " << &stringREF << endl;
	cout << endl;

	//print value strings
	cout << "---brain's value" << endl;
	//value of the string variable
	cout << "string variable: " << brain << endl;
	//value a pointed by stringPTR
	cout << "a pointed by stringPTR: " << *stringPTR << endl;
	//value a pointed by stringREF
	cout << "a pointed by stringREF: " << stringREF << endl; 


	return (0);
}
