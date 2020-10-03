#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){};

Ice::~Ice()
{

}

Ice::Ice(const Ice &snow): AMateria("ice")
{
    this->xp = snow.xp;
}

Ice &Ice::operator=(const Ice &snow)
{
    this->xp = snow.xp;
    return (*this);
}

AMateria *Ice::clone(void) const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    this->xp += 10;
    std::cout << "* shoots an ice bolt at" + target.getName() + "*\n";
    return ;
}