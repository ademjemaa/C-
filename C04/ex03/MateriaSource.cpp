/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:20:17 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:20:18 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->source[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        if (this->source[i] != NULL)
            delete this->source[i];
}

MateriaSource::MateriaSource(MateriaSource const &mat)
{
    for (int i = 0; i < 4; i++)
    {
        if (mat.source[i] != NULL)
            this->source[i] = mat.source[i]->clone();
        else
            this->source[i] = NULL;
    }
    return ;
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &mat)
{
    for (int i = 0; i < 4; i++)
        if (this->source[i] != NULL)
            delete this->source[i];
    for (int i = 0; i < 4; i++)
    {
        if (mat.source[i] != NULL)
            this->source[i] = mat.source[i]->clone();
        else
            this->source[i] = NULL;
    }
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->source[i] == m)
            return ;
        if (this->source[i] == NULL)
        {
            this->source[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++) 
        if (this->source[i] != NULL && (this->source[i]->getType() == type))
            return (this->source[i]->clone());
    return (NULL);
}
