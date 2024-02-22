/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:32:37 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/22 18:49:00 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"
# include <iostream>
# include <string>
using std::string;

class HumanA
{
private:
	string	name;
	Weapon	&type;
public:
	HumanA( string name, Weapon &club );
	~HumanA(void);
	string	attack();
};


#endif // !HUMANA_CPP