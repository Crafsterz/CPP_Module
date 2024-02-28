/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:31:53 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 12:04:47 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack()
{
  if (this->type == NULL || this->type->getType() == "")
    cout << name << " has no weapon " << endl;
  else
    cout << name << " attacks with a " << type->getType() << endl;
}

void HumanB::setWeapon(Weapon& type)
{
  this->type = &type;
}
