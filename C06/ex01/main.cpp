#include "serialize.hpp"

int main()
{
    void    *raw;
    Data    *data;

    raw = serialize();
    data = deserialize(raw);
    std::cout << "s1 =" + data->s1 + '\n';
    std::cout << "n =";
    std::cout << data->n;
    std::cout << "\ns2 =" + data->s2 + '\n';
}