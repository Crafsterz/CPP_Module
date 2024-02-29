/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:14:36 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/29 19:05:08 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	sedReplace(char *toFind, char *toRepl ,string buffer)
{
	ofstream	newFile;
	int			pos;
	int			size;

	size = buffer.size();
	newFile.open((string(toFind) + ".replace").c_str());
	if(newFile.fail())
		return (1);
	for (int i = 0; i < size; i++)
	{
		pos = buffer.find(toFind, i);
		if (pos != -1 && pos == i)
		{
			newFile << toRepl;
			i += string(toFind).size() - 1;
		}
		else
			newFile << buffer[i];
	}
	return (0);
}

int	main(int ac, char **av)
{
	ifstream	ifs;
	string		buffer;
	char		ch;

	if (ac != 4)
	{
		std::cerr << "Incorrect number of parameters" << endl;
		return (1);
	}
	if(!ifs)
	{
		std::cerr <<  "Error opening input file" << endl;
		return (1);
	}

	while (!ifs.eof() && ifs >> std::noskipws >> ch)
	{
		buffer += ch;
	}
	ifs.close();
	if (sedReplace(av[2], av[3], buffer) == 1)
		return (1);
	return (0);
}


// #include <sstream>

// void	sedReplace(string toFind, string toRepl, string file)
// {
// 	while (!file.eof())
// 	{
// 		file.find(toFind);
// 	}
// }

// // try to make a prog read from file a write to file b
// int	main(void)
// {
// 	string		fileName = "TEST";
// 	ifstream	ifs(fileName);
	
// 	ofstream	ofs("out.replace");
// 	string		s1, s2;
// 	string		buffer;
// 	std::stringstream		newBuffer;

// 	s1 = "what";
// 	s2 = "tahw";

// 	if (!ifs)
// 	{
// 		std::cerr << "Error opening input file" << endl;
// 		return (1);
// 	}
// 	while (getline(ifs, buffer))
// 	{
// 		// do something with buffer contents
// 		newBuffer << buffer << endl;
// 		newBuffer.str();
// 		cout << buffer << endl;
// 	}
// 	ifs.close();
// 	ofs.close();
// 	sedReplace(s1, s2, fileName); //fileName need to be changed

// 	return (0);
// }
