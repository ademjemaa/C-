/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:38:51 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:44:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	this->name = name;
	std::cout << "Zog zog.\n";
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...\n";
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->name + " has been turned into a pink pony!\n";
	return ;
}
