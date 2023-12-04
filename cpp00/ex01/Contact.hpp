/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:49:56 by mukhairu          #+#    #+#             */
/*   Updated: 2023/12/04 19:11:05 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
using std::string;

/*The class is used as a blueprint of the Object*/
class Contact
{
	private:
		string name;
		string phoneNumber;
		string emailAddress;
		string notes;

	public:
		Contact(void);
		~Contact(void);

		string	getName();
		string	getPhoneNumber();
		string	getEmailAddress();
		string	getNotes();
		void	setName(string newName);
		void	setPhoneNumber(string newPhoneNum);
		void	setEmailAddress(string newEmailAddr);
		void	setNotes(string newNotes);
};



#endif // !CONTACT_HPP
