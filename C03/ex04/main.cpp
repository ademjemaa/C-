/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:36:15 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 13:12:02 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	ScavTrap	uno("Aleksander");
	ScavTrap	dos("Hamilton");
	FragTrap	tres("Howard");
	FragTrap	cuatro("Michael");
	NinjaTrap	chico("Naruto");
	ClapTrap	bubba("God");
	SuperTrap	bro("bruh");

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
	chico.ninjaShoebox(uno);
	chico.ninjaShoebox(tres);
	chico.ninjaShoebox(bubba);
	bro.rangedAttack(uno.getName());
	bro.meleeAttack(dos.getName());
	return (0);
}
