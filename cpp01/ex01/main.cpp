/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:20:39 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/21 15:35:53 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	num = 0;
	string	name;
	string	input;

	cout << "Enter the name of the Zombies : ";
	cin >> name;
	cout << "Enter the number of Zombies: ";
	cin >> input;
	num = atoi(input.c_str());
	if (num > 0)
	{
		Zombie* zombies = zombieHorde(num, name);
		for (int i = 0; i < num; i++)
			zombies->announce();
		delete [] zombies;
	}
	else
	{
		cout << "There are no " << name << " Zombies" << endl;
		return(0);
	}
	
	return (0);
}
