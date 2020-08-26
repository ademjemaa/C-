/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 02:07:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 03:18:49 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!\n";
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh...\n";
	return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &marine)
{
	*this = marine;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &marine)
{
	(void)marine;
	return (*this);
}

TacticalMarine	*TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!\n";
	return ;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *\n";
	return ;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout <<  "* attacks with a chainsword *\n";
	return ;
}
