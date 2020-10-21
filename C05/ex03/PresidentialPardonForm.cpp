/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:49:16 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/21 12:49:17 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &scf) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = scf.target;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &scf)
{
    if (this != &scf)
    {
        this->target = scf.target;
    }
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    Form::execute(executor);
    std::cout << this->target + " has been pardoned by Zafod Beeblebrox\n";
}
