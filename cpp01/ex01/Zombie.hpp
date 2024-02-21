/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:53:47 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/21 15:18:58 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

class Zombie
{
	private:
		string	name;

	public:
		Zombie();
		~Zombie(void);

		void    announce(void);
		void	setName(string newName);
};
	Zombie* zombieHorde( int N, std::string name );

#endif // !ZOMBIE_HPP
