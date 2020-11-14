#include "array.hpp"

int main()
{
    Array<std::string> list(5);
    list[0] = "lets\n";
    list[1] = "please\n";
    list[2] = "finish\n";
    list[3] = "this\n";
    list[4] = "module\n";
    try
    {
        std::cout << list[6];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Array<std::string> second(list);
    std::cout << second[2];
    Array<std::string> third = list;
    std::cout << third[3];
    Array<int> last(3);
    last[0] = 3;
    last[1] = 1;
    last[2] = 98;
    try
    {
        std::cout << last[2] << std::endl;
        last[3] = 666;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "this array size is : ";
    std::cout << last.getLen() << std::endl;
}