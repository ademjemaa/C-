/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:36:15 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 11:35:17 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	uno("Aleksander");
	ScavTrap	dos("Hamilton");
	FragTrap	tres("Howard");
	FragTrap	cuatro("Michael");

	uno.rangedAttack(dos.getName());
	dos.takeDamage(dos.getRangedAttackDamage());
	uno.meleeAttack(dos.getName());
	dos.takeDamage(dos.getMeleeAttackDamage());
	uno.challengeNewcomer(dos.getName());
	tres.rangedAttack(cuatro.getName());
	cuatro.takeDamage(cuatro.getRangedAttackDamage());
	tres.meleeAttack(cuatro.getName());
	cuatro.takeDamage(cuatro.getMeleeAttackDamage());
	tres.vaulthunter_dot_exe(cuatro.getName());
	return (0);
}
