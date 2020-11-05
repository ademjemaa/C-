#include "serialize.hpp"

void    *serialize(void)
{
    char*   str = new char[20];
    char    array[63] = "azertyuiopqsdfghjklmwxcvbn1234567890AZERTYUIOPQSDFGHJKLMWXCVBN";

    srand(time(NULL));
    for (int i = 0; i < 8; i++)
        str[i] = array[rand() % 62];
    *reinterpret_cast<int*>(str + 8) = rand() % 21457778;
    for (int i = 12; i < 20; i++)
        str[i] = array[rand() % 62];
    return (reinterpret_cast<void*>(str));
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    char    *serialized = reinterpret_cast<char*>(raw);

    for (int i = 0; i < 8; i++)
        data->s1 += serialized[i];
    data->n = *reinterpret_cast<int*>(serialized + 8);
    for (int i = 0; i < 8; i++)
        data->s2 += serialized[i + 12];
    return (data);
}