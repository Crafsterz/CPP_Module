/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:39:24 by mukhairu          #+#    #+#             */
/*   Updated: 2024/02/20 16:51:22 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip> 
# include <string>
# include <cctype>
using std::string;

class PhoneBook
{
	private:
		Contact _contact[8];
		int _index;

	public:
		PhoneBook(void);
		~PhoneBook(void);

    void	printWholeContacts(void);
    // void	addContacts(void);
    void	addInput(void);
		string	checkInput(string message);
		int		checkPhoneNumber(string text);
		int 	checkName(string text);
		int		checkDarkSecret(string text);
    void  checkLength(int size);

};


#endif // !PHONEBOOK_H
