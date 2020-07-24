/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:24:16 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/19 00:32:51 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	this->fpv = 0;
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	*this = fix;
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Assignation operator called\n";
	if (this != &fix)
	{
		this->fpv = fix.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fpv);
}

void	Fixed::setRawBits(int const rb)
{
	this->fpv = rb;
	return ;
}
