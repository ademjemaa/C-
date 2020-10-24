#include "generator.hpp"

Generator::Generator(std::string const original)
{
    this->original = original;
    for (int i; i < 4; i++)
        this->types[i] = 0;
    this->convert();
}