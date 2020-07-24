/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:29:21 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/09 22:29:08 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private :
		std::string name;
		Weapon	&weapon;
	public :
		HumanA(std::string, Weapon&);
		void	setName(std::string);
		void	setWeapon(Weapon&);
		void	attack(void);
};

#endif
