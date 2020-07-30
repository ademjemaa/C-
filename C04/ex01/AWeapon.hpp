/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:31:18 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 14:20:57 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define	AWEAPON_HPP

#include <iostream>

class	AWeapon{
	protected :
		std::string name;
		int			damage;
		int			apcost;
		std::string	effect;
	public :
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);
		AWeapon(const AWeapon &wep);
		AWeapon	&operator=(const AWeapon &wep);
		std::string	getName(void) const;
		int			getAPCost(void) const;
		int			getDamage(void) const;
		virtual	void	attack(void) const = 0;

};

#endif
