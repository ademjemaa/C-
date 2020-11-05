#include "Base.hpp"

int main()
{
    A   a;
    B   b;
    C   c;
    Base base;

    identify_from_pointer(&a);
    identify_from_pointer(&c);
    identify_from_pointer(&b);
    identify_from_pointer(&base);

    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    identify_from_reference(base);

}