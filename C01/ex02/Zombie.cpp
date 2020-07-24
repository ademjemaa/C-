/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 00:47:05 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 01:49:52 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::setName(std::string str)
{
	this->name = str;
	return ;
}

void	Zombie::setType(std::string str)
{
	this->type = str;
	return ;
}

void	Zombie::setPower(int str)
{
	this->power = str;
	return ;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

std::string	Zombie::getType(void)
{
	return (this->type);
}

int			Zombie::getPower(void)
{
	return (this->power);
}

std::string	Zombie::advert(void)
{
	std::string str;
	str = '<' + this->getName() + " (" + this->getType() + ")> Braiiiiiiinnnssss ...\n";
	return (str);
}
