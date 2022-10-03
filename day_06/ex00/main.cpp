#include <iostream>
#include "convertion.hpp"

int defineType(char *s)
{
    std::string str(s);

    if (isInt(str))
        printInt(str);
    isFloat(s);
    isDouble(s);
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of parameteres" << std::endl;
        return 1;
    }
    defineType(av[1]);
}