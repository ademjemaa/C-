/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:18:52 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/28 13:46:59 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	playero("player1");
	FragTrap	playert("player2");

	playero.rangedAttack(playert.getName());
	playert.takeDamage(playero.getRangedAttackDamage());
	playero.meleeAttack(playert.getName());
	playert.takeDamage(playero.getMeleeAttackDamage());
	playero.vaulthunter_dot_exe(playert.getName());
	playert.takeDamage(playero.getRangedAttackDamage());
	playert.beRepaired(5);
	playero.vaulthunter_dot_exe(playert.getName());
	playert.takeDamage(playero.getRangedAttackDamage());
	playero.vaulthunter_dot_exe(playert.getName());
	playert.takeDamage(playero.getRangedAttackDamage());
	playero.meleeAttack(playert.getName());
	playert.takeDamage(playero.getMeleeAttackDamage());
	playero.meleeAttack(playert.getName());
	playert.takeDamage(playero.getMeleeAttackDamage());
	playert.beRepaired(20);
	return 0;
}
