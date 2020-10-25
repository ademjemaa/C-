#include "generator.hpp"

Generator::Generator(std::string const original) : original(original)
{
    for (int i = 0; i < 4; i++)
        this->types[i] = 0;
    this->convert();
}

Generator::~Generator(void)
{

}

Generator::Generator(Generator const &gen) : original(gen.original)
{
	*this = gen;
}

Generator	&Generator::operator=(Generator const &gen)
{
	if (this != &gen)
	{
		this->original = gen.original;
	}
	return (*this);
}

void	Generator::convert(void)
{
	if (this->original.length() == 1)
	{
		if (isprint(this->original[0]))
		{
			this->types[0] = 1;
			this->convs.aschar = this->original[0];
		}
		else
			this->types[0] = 2;
	}
	else
		this->types[0] = 3;
	std::stringstream bruh(this->original);
	unsigned int t;
	bruh >> t;
	if (t > INT_MAX)
		std::cout << t;
	if (bruh.fail())
		std::cout << "azebi";
}

int		Generator::getInt(void) const
{
	return (this->convs.asint);
}

char	Generator::getChar(void) const
{
	if (this->types[0] == 2)
		std::cout << "non printable";
	if (this->types[0] == 3)
		std::cout << "impossible";
	return (this->convs.aschar);
}

float	Generator::getFloat(void) const
{
	return (this->convs.asfloat);
}

double	Generator::getDouble(void) const
{
	return (this->convs.asdouble);
}

std::string	Generator::getOriginal(void) const
{
	return (this->original);
}

std::ostream	&operator<<(std::ostream &out, Generator const &gen)
{
	out << "char : " + std::to_string(gen.getChar());
	out << "\nint : " + std::to_string(gen.getInt());
	out << "\nfloat : " + std::to_string(gen.getFloat());
	out << "\ndouble : " + std::to_string(gen.getDouble());
	return (out);
}
