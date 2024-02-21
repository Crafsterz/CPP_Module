/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:02:09 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/21 14:43:50 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	cout << name << " is dead" << endl;
}

void	Zombie::announce(void)
{
	cout << name;
	cout << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::setName(string newName)
{
	this->name = newName;
}