#include "Base.hpp"

Base::~Base(void){}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout <<  "A\n";
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B\n";
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C\n";
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A*>(&p) != NULL)
        std::cout <<  "A\n";
    if (dynamic_cast<B*>(&p) != NULL)
        std::cout << "B\n";
    if (dynamic_cast<C*>(&p) != NULL)
        std::cout << "C\n";
}