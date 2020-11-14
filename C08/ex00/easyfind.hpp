#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <list>
#include <deque>

template <typename T>
bool easyfind(T container, int target)
{
    try
    {
        std::sort(container.begin(), container.end());
        if (std::binary_search(container.begin(), container.end(), target))
            return (true);
        return (false);
    }
    catch(const std::exception& e)
    {
        throw;
    }
    
}

#endif