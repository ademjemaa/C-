#include "span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(1);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(12);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(28);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Span    sp1;
    try
    {
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}