/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 14:23:53 by adjemaa           #+#    #+#             */
/*   Updated: 2020/07/29 16:49:29 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class	Sorcerer{
	private :
		std::string name;
		std::string title;
	public :
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(const Sorcerer &mage);
		std::string	getName(void) const;
		std::string getTitle(void) const;
		void	setName(std::string name);
		void	setTitle(std::string title);
		Sorcerer &operator=(const Sorcerer &mage);
		void	polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &output, Sorcerer const &mage);

#endif
