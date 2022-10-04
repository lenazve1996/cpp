#include "convertion.hpp"

int defineType(char *s)
{
    std::string str(s);

    checkChar(str);
    checkInt(s);
    checkFloat(s);
    checkDouble(s);
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

// ./convert 0
// ./convert A
// ./convert 42
// ./convert -400
// ./convert nan 
// ./convert -inf
// ./convert -inff
// ./convert 9999999999
// ./convert 54.0f
// ./convert 54.0fd
// ./convert 54f
// ./convert abc
// ./convert 4534.75675675