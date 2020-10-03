#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *source[4];
public:
	MateriaSource();
    virtual ~MateriaSource();
	MateriaSource(MateriaSource const &mat);
	MateriaSource &operator=(MateriaSource const &mat);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif