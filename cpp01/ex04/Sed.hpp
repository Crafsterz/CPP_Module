/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:06:27 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 12:20:44 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

class Sed
{
  private:
    
  public:
    Sed();
    ~Sed();
    string sedReplace();
};

#endif
