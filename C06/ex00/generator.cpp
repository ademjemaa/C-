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
	float buffer = 0;
	try
	{
		buffer = std::stof(this->original);
		if (buffer <= 127 && buffer >= 0)	
		{
			if (buffer > 31 && buffer < 127)
			{
				this->types[0] = 1;
				this->convs.aschar = static_cast<char>(buffer);
			}
			else
				this->types[0] = 2;
		}
		else
			this->types[0] = 3;
		if (buffer + 100 > INT_MAX|| buffer - 100 < INT_MIN)
			this->types[1] = 2;
		else
		{
			long long precision = std::stoll(this->original);
			if (precision > INT_MAX || precision < INT_MIN)
				this->types[1] = 2;
			else
			{
				this->convs.asint = precision;
				this->types[1] = 1;
			}
		}
		if (buffer > __DBL_MAX__ || buffer < __DBL_MIN__)
			this->types[3] = 2;
		else
		{
			this->convs.asdouble = static_cast<double>(buffer);
			this->types[3] = 1;
		}
		this->convs.asfloat = buffer;
		this->types[2] = 1;
	}
	catch(const std::exception& e)
	{
		throw Generator::BadInput();
	}
}

int		Generator::getInt(void) const
{
	return (this->convs.asint);
}

char	Generator::getChar(void) const
{
	return (this->convs.aschar);
}

const char* Generator::BadInput::what() const throw()
{ 
	return ("Invalid format or can't be converted."); 
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
	{
		out << "char : \'";
		out << gen.getChar();
		out << '\'';
	}
	if (gen.getTypes(0) == 3)
		out << "char : impossible";
	if (gen.getTypes(0) == 2)
	out << "char : non printable";
	if (gen.getTypes(1) == 1)
		out << "\nint : " + std::to_string(gen.getInt());
	if (gen.getTypes(1) == 2)
		out << "\nint : impossible";
	if (gen.getTypes(2) == 1)
	{
		out << "\nfloat : ";
		out << gen.getFloat();
		if (floorf(gen.getFloat()) == gen.getFloat())
			out << ".0";
		out << "f";
	}
	if (gen.getTypes(2) == 2)
		out << "\nfloat : impossible";
	if (gen.getTypes(3) == 1)
	{
		out << "\nDouble : ";
		out << gen.getDouble();
		if (floorf(gen.getFloat()) == gen.getFloat())
			out << ".0";
		out << '\n';
	}
	if (gen.getTypes(3) == 2)
		out << "\nDouble : impossible\n";

	return (out);
}
