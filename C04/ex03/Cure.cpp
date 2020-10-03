#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){};

Cure::~Cure()
{

}

Cure::Cure(const Cure &cur): AMateria("cure")
{
    this->xp = cur.xp;
}

Cure &Cure::operator=(const Cure &cur)
{
    this->xp = cur.xp;
    return (*this);
}

AMateria *Cure::clone(void) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    this->xp += 10;
    std::cout << "* heals " + target.getName() + "'s wounds*\n";
    return ;
}