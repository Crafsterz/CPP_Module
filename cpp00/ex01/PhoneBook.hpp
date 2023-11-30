/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:39:24 by mukhairu          #+#    #+#             */
/*   Updated: 2023/11/30 21:39:14 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact contact[8];
		int contIndex;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	printWholeContacts(void);
		void	addContacts(Contact contact);
		string	getInput(string input);

};


#endif // !PHONEBOOK_H
