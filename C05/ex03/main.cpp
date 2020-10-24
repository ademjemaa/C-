/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:21:45 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/21 15:36:12 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <stdio.h>

int main(void)
{
	Bureaucrat mokriz("mokriz", 3);
	Form nuclear("nuclear", 150, 1);
	Form visa("visa", 150, 100);
	Form farm("farm", 150, 150);
	Intern someRandomIntern;
	Form* rrf;
	std::string	strings[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	srand (time(NULL));
	int rando = rand() % 3;
	rrf = someRandomIntern.makeForm(strings[rando], "Bender");
	ShrubberyCreationForm toto("file");
	RobotomyRequestForm gunner("superman");
	gunner.beSigned(mokriz);
	std::cout << toto;
	mokriz.signForm(*rrf);
	mokriz.executeForm(*rrf);
	toto.beSigned(mokriz);
	std::cout << toto;
	gunner.execute(mokriz);
	toto.execute(mokriz);
	mokriz.executeForm(gunner);
	mokriz.incrementBureaucrat();
	std::cout << mokriz;
	mokriz.decrementBureaucrat();
	std::cout << mokriz;
    std::cout << mokriz.getName() + '\n';
	std::cout << visa;
	visa.beSigned(mokriz);
	mokriz.signForm(visa);
	mokriz.signForm(farm);
	mokriz.signForm(nuclear);
	try
	{
		RobotomyRequestForm bobo("nik");
		bobo.execute(mokriz);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat zabour("Zabour", 50);
		Form chaos("chaos", 160, 50);
		std::cout << zabour;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat mostahil("mostahil", 100);
		Form peace("peace", 0, 100);
		std::cout << mostahil;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat tahan("tahan", 1);
		PresidentialPardonForm toppo("ben ali");
		toppo.beSigned(tahan);
		toppo.execute(tahan);
		std::cout << tahan;
		tahan.incrementBureaucrat();
		std::cout << tahan;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat lekher("lekher", 150);
		std::cout << lekher;
		lekher.decrementBureaucrat();
		std::cout << lekher;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
