/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:36:15 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 10:58:47 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	uno("Aleksander");
	ScavTrap	dos("Hamilton");

	uno.rangedAttack(dos.getName());
	dos.takeDamage(dos.getRangedAttackDamage());
	uno.meleeAttack(dos.getName());
	dos.takeDamage(dos.getMeleeAttackDamage());
	uno.challengeNewcomer(dos.getName());
	return (0);
}
