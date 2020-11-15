#include "span.hpp"

Span::Span(void)
{
    this->size = 0;
}

Span::Span(const unsigned int size)
{
    this->size = size;
}

Span::~Span(void)
{

}

Span::Span(const Span &sp)
{
    *this = sp;
}

Span    &Span::operator=(const Span &sp)
{
    if (this != &sp)
    {
        this->size = sp.size;
        this->list = sp.list;
    }
    return (*this);
}

void    Span::addNumber(const int n)
{
    if (this->list.size() < this->size)
        this->list.insert(this->list.begin(), n);
    else
        throw std::overflow_error("Out of bounds");
}

int     Span::shortestSpan(void)
{
    int min;
    if (this->size < 2)
        throw std::runtime_error("size is too small");
    else
    {
        int min = std::max(this->list[0], this->list[1]) - std::min(this->list[0], this->list[1]);
        for (int i = 0; i < this->size; i++)
            for(int j = i +1; j < this->size; j++)
                if ((std::max(this->list[i], this->list[j]) - std::min(this->list[i], this->list[j]) < min))
                    min = std::max(this->list[i], this->list[j]) - std::min(this->list[i], this->list[j]);
        return (min);
    }  
}

int     Span::longestSpan(void)
{
    if (this->size < 2)
        throw std::runtime_error("size is too small");
    return ((*std::max_element(this->list.begin(), this->list.end())) - (*std::min_element(this->list.begin(), this->list.end())));
}