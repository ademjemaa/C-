/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 17:30:43 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/06 20:35:30 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
me->recoverAP();
std::cout << *me;
me->attack(b);
std::cout << *me;
me->equip(pf);
Enemy *s = new SuperMutant();
me->attack(s);
me->attack(s);
me->attack(s);
me->attack(s);
std::cout << *me;
Enemy *t = new SuperMutant();
me->attack(t);
return 0;
}
