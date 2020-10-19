/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:21:45 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:21:47 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat mokriz("mokriz", 50);
	Form nuclear("nuclear", 150, 1);
	Form visa("visa", 150, 100);
	Form farm("farm", 150, 150);
	std::cout << mokriz;
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
