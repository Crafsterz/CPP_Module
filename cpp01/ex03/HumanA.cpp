/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:28:26 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 12:04:35 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( string name, Weapon &club ) : name(name), type(club)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{
  if (this->type.getType() == "")
    cout << name << " has no weapon " << endl;
  else
    cout << name << " attacks with a " << type.getType() << endl;
}

