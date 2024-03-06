/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:38:59 by mukhairu          #+#    #+#             */
/*   Updated: 2024/03/06 15:47:01 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>
using std::string;
using std::cout;
using std::endl;

class Harl
{
  private:
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);

  public:
    Harl();
    ~Harl(void);
    void  complain(string level);

};

#endif