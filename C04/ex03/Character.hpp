#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{

    private :
        std::string name;
        AMateria *inventory[4];
    public :
        Character(std::string const &name);
	    Character(Character const &car);
	    virtual ~Character();
        Character &operator=(Character const &car);
        std::string const &getName(void) const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif