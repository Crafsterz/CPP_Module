/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:39:13 by mukhairu          #+#    #+#             */
/*   Updated: 2024/03/06 15:57:13 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl(void)
{}

void	Harl::debug(void)
{
  cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info(void)
{
  cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::warning(void)
{
  cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::error(void)
{
  cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
  void   (Harl:: *ft_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    {
      (this->*ft_ptr[i])();
      break;
    }
  }
}
