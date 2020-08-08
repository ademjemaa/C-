/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:18:24 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/31 17:41:10 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define	PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon{
	public :
		PlasmaRifle();
		~PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &rifle);
		PlasmaRifle &operator=(const PlasmaRifle &rifle);
		virtual void	attack(void) const;
};

#endif
