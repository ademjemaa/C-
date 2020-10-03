#include "Character.hpp"

Character::Character(std::string const &name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(Character const &car)
{
    this->name = car.name;
    for (int i = 0; i < 4; i++)
    {
        if (car.inventory[i] != NULL)
            this->inventory[i] = car.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return ;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
}

Character &Character::operator=(Character const &car)
{
    this->name = car.name;
    for (int i = 0; i < 4; i++)
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    for (int i = 0; i < 4; i++)
    {
        if (car.inventory[i] != NULL)
            this->inventory[i] = car.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == m)
            return ;
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 && idx > 3)
        return ;
    for (int i = idx; i < 3; i++)
        this->inventory[i] = this->inventory[i + 1];
    this->inventory[3] = NULL;
    return ;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
    return ;
}