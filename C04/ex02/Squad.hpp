/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 21:56:28 by adjemaa           #+#    #+#             */
/*   Updated: 2020/08/26 04:44:09 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad{
	private :
		 struct node
		 {
			ISpaceMarine	*marine;
			node			*next;
		 };
		 node		*squad;
	public :
		 int	getCount() const;
		 ISpaceMarine	*getUnit(int) const;
		 virtual int	push(ISpaceMarine *marine);
		 Squad(void);
		 virtual ~Squad(void);
		 Squad(const Squad &gang);
		 Squad &operator=(const Squad &gang);
};

#endif
