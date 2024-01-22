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
		string firstName;
		string lastName;
    string nickName;
		string phoneNumber;
		string darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		string	getFirstName();
		string	getLastName();
    string  getNickName();
		string	getPhoneNumber();
		string	getDarkestSecret();
		void	setFirstName(string newFirstName);
		void	setLastName(string newLastName);
    void	setNickName(string newNickName);
		void	setPhoneNumber(string newPhoneNum);
		void	setDarkestSecret(string newDarkestSecret);
};

#endif // !CONTACT_HPP
