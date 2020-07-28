/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:24:16 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 10:57:33 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::fbits = 8;

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

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called\n";
	this->fpv = val << fbits;
	std::cout << " val == " + std::to_string(this->fpv) + '\n';
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	this->fpv = val * (1 << fbits);
}

bool	&operator>(const Fixed &fix)
{
	return (this->fpv > fix->fpv);
}

bool	&operator<(const Fixed &fix)
{
	return (this->fpv < fix->fpv);
}

bool	&operator>=(const Fixed &fix)
{
	return (this->fpv >= fix->fpv);
}

bool	&operator<=(const Fixed &fix)
{
	return (this->fpv <= fix->fpv);
}

bool	&operator==(const Fixed &fix)
{
	return (this->fpv == fix->fpv);
}

bool	&operator!=(const Fixed &fix)
{
	return (this->fpv != fix->fpv);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->fpv) / (1 << fbits));
}

int		Fixed::toInt(void) const
{
	return ((int)(this->fpv >> fbits));
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
	return (this->fpv);
}

void	Fixed::setRawBits(int const rb)
{
	this->fpv = rb;
	return ;
}

std::ostream	&operator<<(std::ostream &output, Fixed const &val)
{
	output << val.toFloat();
	return (output);
}
