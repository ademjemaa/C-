/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:36:09 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:44:42 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class	Peon : public virtual Victim{
	public :
		Peon(std::string name);
		~Peon(void);
		void	getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &output, Victim const &vic);

#endif
