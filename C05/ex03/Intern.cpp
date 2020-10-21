/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:55:30 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/21 15:31:17 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::~Intern(void)
{

}

Intern::Intern(const Intern &inter)
{
	*this = inter;
}

Intern	&Intern::operator=(Intern const &inter)
{
	(void)inter;
	return (*this);
}

Form*	Intern::makeForm(std::string type, std::string target)
{
	struct student
	{
		std::string	target;
		Form *form;
	};
	student studs[3] = {{"robotomy request", new RobotomyRequestForm(target)},
						{"presidential pardon", new PresidentialPardonForm(target)},
						{"shrubbery creation", new ShrubberyCreationForm(target)}};
	for (int i = 0; i < 3; i++)
		if (type == studs[i].target)
		{
			std::cout << "Intern creates <" + studs[i].form->getName() + ">\n";
			return (studs[i].form);
		}
	return (NULL);
}
