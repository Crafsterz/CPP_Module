/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:48:10 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/22 16:45:43 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
using	std::string;

class Weapon
{
	private:
		string	type;
		
	public:
		Weapon::Weapon(string type);
		~Weapon(void);
		string	getType();
		void	setType(string newType);

};


#endif // !WEAPON_HPP

