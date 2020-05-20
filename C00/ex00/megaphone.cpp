#include <iostream>

void megaphone(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != 0; j++)
        {
            std::cout <<(char)toupper(argv[i][j]);
        }
    }
    std::cout <<  "\n";
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        megaphone(argc, argv);
    }
    else
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    
    return 0;
}