#ifndef GENERATOR_HPP
# define GENERATOR_HPP

#include <iostream>
#include <ctype.h>
#include <sstream> 
#include <string>
#include <math.h>
#include <stdint.h>
#include <limits.h>

struct converted{
    char    aschar;
    int     asint;
    float   asfloat;
    double  asdouble;
};


class Generator
{
    private :
        std::string original;
        converted   convs;
        int         types[4];
        void        convert(void);
    public :
        Generator(std::string const original);
        ~Generator(void);
        Generator(Generator const &gen);
        Generator &operator=(Generator const &gen);
		int		getTypes(int i) const;
        int     getInt(void) const;
        char    getChar(void) const;
        float   getFloat(void) const;
        double  getDouble(void) const;
        class BadInput : public std::exception
        {
            virtual const char* what() const throw();
        };
        std::string getOriginal(void) const;
};

std::ostream    &operator<<(std::ostream &out, Generator const &gen);

#endif
