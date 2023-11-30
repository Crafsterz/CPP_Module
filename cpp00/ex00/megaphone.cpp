/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:10:19 by mukhairu          #+#    #+#             */
/*   Updated: 2023/11/28 19:35:07 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc < 2 )
	{
		std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
