#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <list>
#include <array>
#include <iostream>

class Span{
    private :
        std::vector<int> list;
        unsigned int    size;
    public:
        Span(void);
        Span(const unsigned int size);
        virtual ~Span(void);
        Span(const Span &sp);
        Span    &operator=(const Span &sp);
        void    addNumber(const int n);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif