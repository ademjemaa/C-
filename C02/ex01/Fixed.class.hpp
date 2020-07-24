/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:06:18 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/22 23:09:40 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed{
	private :
		int		fpv;
		static	const	int fbits;
	public :
		Fixed(void);
		~Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed(const Fixed &fix);
		Fixed	&operator=(const Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const rb);
};

std::ostream &operator<<(std::ostream &output, Fixed const &val);

#endif
