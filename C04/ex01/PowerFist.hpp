/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 13:30:12 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/30 13:31:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public :
		PowerFist();
		~PowerFist(void);
		PowerFist(const PowerFist &fist);
		PowerFist &operator=(const PowerFist &fist);
		void	attack(void) const = 0;
};

#endif
