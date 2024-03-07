/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukhairu <mukhairu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:20:03 by mukhairu          #+#    #+#             */
/*   Updated: 2024/03/07 19:08:25 by mukhairu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed(/* args */)
{
	cout << "Default constructor called" << endl;
	fixedNum = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed& src)
{
	cout << "Copy assignment operator called" << endl;
	this->fixedNum = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (fixedNum);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBit member function called" << endl;
	this->fixedNum = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}
