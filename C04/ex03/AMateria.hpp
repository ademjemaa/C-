/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:35:46 by adjemaa           #+#    #+#             */
/*   Updated: 2020/09/21 20:09:01 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
# include <string>
class AMateria;
#include "ICharacter.hpp"

class	AMateria{
	protected :
		unsigned int xp;
		std::string type;
	public :
	 	AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria(const AMateria &ama);
		AMateria &operator=(const AMateria &ama);
		std::string const &getType(void) const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
