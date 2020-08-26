/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 02:23:01 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 03:19:02 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout <<  "* teleports from space *\n";
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back...\n";
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &ass)
{
	*this = ass;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &ass)
{
	(void)ass;
	return (*this);
}

AssaultTerminator	*AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}

void	AssaultTerminator::battleCry(void) const
{
	 std::cout << "This code is unclean. PURIFY IT!\n";
	 return ;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *\n";
	return ;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attacks with chainfists *\n";
	return ;
}
