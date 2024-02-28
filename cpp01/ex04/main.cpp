/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:05:34 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 12:22:48 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//read file write to terminal
int main(void)
{
  string fileName = "TEST.txt";
  // string s1 = "Words";
  // string s2 = "To be replaced";
  string buffer;
  ifstream infile;
  infile.open(fileName);
  if (!infile.is_open())
    return (1);
  // read from file
  // std::getline(infile, buffer);
  // infile >> buffer;
  // while (1)
  // {
  //   infile >> buffer;
  //   cout << buffer << '\n';
  //   if (infile.eof())
  //     break ;
  // }
  while (getline(infile, buffer))
  {
    cout << buffer << '\n';
  }
  infile.close();
  return (0);
}