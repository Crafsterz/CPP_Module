/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:14:36 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/28 16:26:53 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// try to make a prog read from file a write to file b
int	main(void)
{
	string		fileName = "TEST";
	ifstream	ifs(fileName);
	
	ofstream	ofs("out.replace");
	string		s1, s2;
	string		buffer;

	s1 = "what";
	s2 = "tahw";

	if (!ifs)
	{
		std::cerr << "Error opening input file" << endl;
		return (1);
	}
	while (getline(ifs, buffer))
		ofs << buffer << endl;
	ifs.close();
	ofs.close();
	
	return (0);
}
