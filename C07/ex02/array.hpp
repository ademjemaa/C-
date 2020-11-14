#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array{
    private :
        T   *array;
        int len;
    public :
        Array(void) : array(new T[0]), len(0) {};
        Array(unsigned int i) : array(new T[i]), len(i){};
        virtual ~Array(void) {delete [] this->array;};
        Array(const Array &tab)
        {
            this->array = new T[tab.len];
            this->len = tab.len;
            for (int i = 0; i < this->len; i++)
                this->array[i] = tab.array[i];
        };
        Array   &operator=(const Array &tab)
        {
            if (this == tab)
                return (this);
            this->array = new T[tab.len];
            this->len = tab.len;
            for (int i = 0; i < this->len; i++)
                this->array[i] = tab.array[i];
            return (this);
        };
        int     getLen(void){return (this->len);};
        T       &operator[](unsigned int i)
        {
            if ((int)i >= this->len)
                throw Overflow();
            return (this->array[i]);
        };
        class Overflow : public std::exception
        {
            virtual const char* what() const throw(){return ("Error : Array overflow");};
        };
};

#endif