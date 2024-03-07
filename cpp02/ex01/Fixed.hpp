/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:19:49 by mukhairu          #+#    #+#             */
/*   Updated: 2024/03/07 19:07:43 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
using std::cout;
using std::endl;

class Fixed
{
private:
	/* data */
	int					fixedNum;
	static const int	fractBits;
public:
	//OCF
	Fixed(/* args */); //Default Constructor
	Fixed(const Fixed& copy); //Copy Constructor
	Fixed& operator = (const Fixed& src); //Assignment Operator
	~Fixed(void); //Destrustor

	int getRawBits( void ) const; //returns the value of the fixed point value
	void setRawBits( int const raw ); //set raw value of the fixed point value
};


#endif // !FIXED_HPP

