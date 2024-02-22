/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:56:26 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/22 16:46:03 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
}

string	Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(string newType)
{
	this->type = newType;
}
