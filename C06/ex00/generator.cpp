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
	std::stringstream ss(this->original);
	if ((ss >> this->convs.asint).fail() || !(ss >> std::ws).eof())
	{
			this->types[1] = 2;
			this->convs.asint = 0;
	}
	else
		this->types[1] = 1;
	ss.clear();
	ss.seekg(0);
	if ((ss >> this->convs.asfloat).fail() || !(ss >> std::ws).eof())
	{
		this->types[2] = 2;
		this->convs.asfloat = 0;
	}
	else
		this->types[2] = 1;
	ss.clear();
	ss.seekg(0);
	if ((ss >> this->convs.asdouble).fail() || !(ss >> std::ws).eof())
	{
		this->types[3] = 2;
		this->convs.asdouble = 0;
	}
	else
		this->types[3] = 1;
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

int		Generator::getTypes(int i) const
{
	return (this->types[i]);
}

std::string	Generator::getOriginal(void) const
{
	return (this->original);
}

std::ostream	&operator<<(std::ostream &out, Generator const &gen)
{
	if (gen.getTypes(0) == 1)
		out << "char : " + std::to_string(gen.getChar());
	if (gen.getTypes(0) == 3)
		out << "char : impossible";
	if (gen.getTypes(0) == 2)
	out << "char : non prntable";
	if (gen.getTypes(1) == 1)
		out << "\nint : " + std::to_string(gen.getInt());
	if (gen.getTypes(1) == 2)
		out << "\nint : impossible";
	if (gen.getTypes(2) == 1)
		out << "\nfloat : " + std::to_string(gen.getFloat());
	if (gen.getTypes(2) == 2)
		out << "\nfloat : impossible";
	if (gen.getTypes(3) == 1)
		out << "\nDouble : " + std::to_string(gen.getDouble()) + '\n';
	if (gen.getTypes(3) == 2)
		out << "\nDouble : impossible\n";

	return (out);
}
