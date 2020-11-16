#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    it = mstack.begin();
    ite = mstack.end();
    std::cout << mstack.size() << std::endl;
    std::cout << *it << std::endl;
    std::cout << *ite << std::endl;
    std::stack<int> s(mstack);
    return 0;
}