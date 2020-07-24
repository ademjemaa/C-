/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 22:29:21 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/09 22:20:01 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private :
		std::string name;
		Weapon	*weapon;
	public :
		HumanB(std::string);
		void	setName(std::string);
		void	setWeapon(Weapon&);
		void	attack(void);
};

#endif
