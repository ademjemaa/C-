#include "generator.hpp"

Generator::Generator(std::string const original) : original(original)
{
    for (int i; i < 4; i++)
        this->types[i] = 0;
    this->convert();
}

~Generator::Generator(void)
{

}

Generator::Generator(Generator const &gen) : original(gen.original)
{
}
