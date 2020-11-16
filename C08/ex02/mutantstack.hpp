#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){};
        virtual ~MutantStack(){};
        MutantStack(const MutantStack &stk){(void)stk;};
        MutantStack<T>  &operator=(const MutantStack &stk){
            if (*this == stk)
                return (*this);
            std::stack<T>::operator=(stk);
            return (*this);
        }
        class iterator{
            public:
                T*  pointer;
                iterator(T* pointer): pointer(pointer){};
                iterator operator++() {this->pointer++; return(*this);};
                iterator operator--() {this->pointer--; return(*this);};
                T&      operator*() {return (*this->pointer);};
                bool    operator!=(const iterator &comp){return(this->pointer != comp.pointer);};
        };
        iterator    end()
        {
            return (&this->top());
        }
        iterator    begin()
        {
            return (iterator(&this->top() - (this->size() - 1)));
        }
};

#endif