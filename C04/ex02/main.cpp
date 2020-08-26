/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 04:29:23 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 04:57:49 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <string>

int main()
{
ISpaceMarine* bob = new TacticalMarine;
ISpaceMarine* jim = new AssaultTerminator;
ISquad* vlc = new Squad;
std::cout << "current count : " + std::to_string(vlc->getCount()) + '\n';
vlc->push(bob);
std::cout << "current count : " + std::to_string(vlc->getCount()) + '\n';
vlc->push(jim);
std::cout << "current count : " + std::to_string(vlc->getCount()) + '\n';
for (int i = 0; i < vlc->getCount(); ++i)
{
ISpaceMarine* cur = vlc->getUnit(i);
cur->battleCry();
cur->rangedAttack();
cur->meleeAttack();
std::cout << "current battle cry : ";
vlc->getUnit(i)->battleCry();
}
delete vlc;
return 0;
}
