#include "easyfind.hpp"

int main(void)
{
    std::deque<int>  list1= {8, 16, 2, 55};
    try
    {
        if (::easyfind(list1, 16))
            std::cout << "element found" << std::endl;
        else
        {
            std::cout << "element not found" << std::endl;
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}