/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 14:36:40 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:47:55 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class	Victim{
	protected :
		std::string name;
	public :
		Victim(std::string name);
		~Victim(void);
		std::string getName(void) const;
		void	getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &output, Victim const &vic);

#endif
