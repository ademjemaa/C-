/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 01:46:08 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 04:43:24 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine{
	public :
		AssaultTerminator(void);
		~AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &ass);
		AssaultTerminator &operator=(const AssaultTerminator &ass);
		virtual AssaultTerminator *clone(void) const;
		virtual void battleCry(void) const;
		virtual void rangedAttack(void) const;
		virtual void meleeAttack(void) const;
};

#endif
