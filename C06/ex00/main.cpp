/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:41:40 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/26 14:50:08 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generator.hpp"

int main(int argc, char *argv[])
{
	(void)argc;
	try
	{
		Generator	gen(argv[1]);
		std::cout << gen;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
