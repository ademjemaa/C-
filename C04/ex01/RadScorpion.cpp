/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:44:22 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/02 17:14:51 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"


RadScorpion::RadScorpion(void)
{
	this->hp = 80;
	this->type = "RadScorpion";
	std::cout <<  "* click click click *\n";
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *\n";
}

RadScorpion::RadScorpion(const RadScorpion &rad)
{
	*this = rad;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rad)
{
	if (this != &rad)
	{
		this->hp = rad.getHP();
		this->type = rad.getType();
	}
	return (*this);
}
