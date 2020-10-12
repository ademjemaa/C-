/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:20:22 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:20:23 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *source[4];
public:
	MateriaSource();
    virtual ~MateriaSource();
	MateriaSource(MateriaSource const &mat);
	MateriaSource &operator=(MateriaSource const &mat);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif
