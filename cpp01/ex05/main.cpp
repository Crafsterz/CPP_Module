/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:38:42 by mukhairu          #+#    #+#             */
/*   Updated: 2024/03/06 15:42:31 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl coworker;

	coworker.complain("DEBUG");
	coworker.complain("INFO");
	coworker.complain("WARNING");
	coworker.complain("ERROR");
	return (0);
}
