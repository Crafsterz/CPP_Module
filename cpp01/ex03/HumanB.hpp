/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:29:03 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 12:04:51 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class HumanB
{
private:
	string	name;
	Weapon*	type;
public:
	HumanB(string name);
	~HumanB(void);
	void	attack();
  void setWeapon(Weapon &type);
};



#endif // !HUMANB_HPP
