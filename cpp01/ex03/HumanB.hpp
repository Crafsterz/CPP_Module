/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:29:03 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/22 19:40:55 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>
using std::string;

class HumanB
{
private:
	string	name;
	Weapon	*type;
public:
	HumanB(string name);
	~HumanB(void);
	// string	attack();
};



#endif // !HUMANB_HPP
