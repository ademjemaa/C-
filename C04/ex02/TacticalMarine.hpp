/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 01:16:31 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 03:17:59 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{
	public :
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(const TacticalMarine &marine);
		TacticalMarine &operator=(const TacticalMarine &marine);
		virtual TacticalMarine *clone(void) const;
		virtual void battleCry(void) const;
		virtual void rangedAttack(void) const;
		virtual void meleeAttack(void) const;
};

#endif
