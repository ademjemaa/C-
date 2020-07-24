/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 22:14:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/06 00:22:06 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

std::string Pony::getPonyName(void)
{
	return (this->pony_name);
}

std::string Pony::getPonyHeight(void)
{
	return (this->pony_height);
}

std::string Pony::getPonyAge(void)
{
	return (this->pony_age);
}

std::string Pony::getPonyHair(void)
{
	return (this->pony_hair);
}

void	Pony::setPonyName(std::string str)
{
	this->pony_name = str;
	return ;
}

void	Pony::setPonyHeight(std::string str)
{
	this->pony_height = str;
	return ;
}

void	Pony::setPonyAge(std::string str)
{
	this->pony_age = str;
	return ;
}

void	Pony::setPonyHair(std::string str)
{
	this->pony_hair = str;
	return ;
}
