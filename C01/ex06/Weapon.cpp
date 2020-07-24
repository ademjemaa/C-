/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:21:21 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/07 22:45:57 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
}

void	Weapon::setType(std::string str)
{
	this->type = str;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}
