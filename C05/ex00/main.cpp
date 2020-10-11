#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mokriz("mokriz", 50);
	std::cout << mokriz;
	mokriz.incrementBureaucrat();
	std::cout << mokriz;
	mokriz.decrementBureaucrat();
	std::cout << mokriz;
    std::cout << mokriz.getName() + '\n';
	try
	{
		Bureaucrat zabour("Zabour", 0);
		std::cout << zabour;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat mostahil("mostahil", 1000);
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