#include <iostream>


template <typename T>
void iter(T* tab, int size, void (*func)(const T&))
{
    for (int i = 0; i < size; i++)
        func(tab[i]);
}

template <typename T>
void    show(T& tab)
{
    std::cout << tab;
    std::cout << '\n';
}

int main()
{
    int array[4] = {0, 2, 4, 8};
    std::string	man[4] = {"bruh", "bro", "brother", "boy"};
    ::iter<std::string>(man, 4, ::show);
    ::iter<int>(array, 4, ::show);
}