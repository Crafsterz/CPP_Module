/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:49:41 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/20 19:09:22 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class Zombie
{
  private:
    string name;

  public:
    Zombie(string name);
    ~Zombie(void);
      
    void    announce(void);
    
};
  Zombie* newZombie(string name);
  void    randomChump(string name);
#endif