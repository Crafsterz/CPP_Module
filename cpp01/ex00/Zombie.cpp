/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:50:22 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/20 19:07:37 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
  this->name = name;
}
Zombie::~Zombie()
{
  cout << name << " is dead" << endl;
}

void Zombie::announce(void)
{
  cout << name;
  cout << ": BraiiiiiiinnnzzzZ..." << endl;
}
