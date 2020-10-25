/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:41:40 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/25 17:24:43 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "generator.hpp"

int main(int argc, char *argv[])
{

	std::string	str = "544gg";
	std::cout << str;
	Generator	gen(str);
	std::cout << gen.getInt();
}
