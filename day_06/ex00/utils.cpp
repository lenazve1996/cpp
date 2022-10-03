#include "convertion.hpp"

int findPrecision(char *s)
{
    std::string str(s);
    unsigned long point_occur = str.find('.');
    if (point_occur != std::string::npos)
    {
        if (str.find('f'))
            return (str.length() - point_occur - 2);
    }
    else
        return 0;
    return (str.length() - point_occur - 1);
}

void displayChar(char symbol)
{
    if (isprint(symbol))
        std::cout << "char: \'" << symbol << "\'" << std::endl;
    else if (isascii(symbol))
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "Impossible" << std::endl;
}

void displayFloat(float numb, int prec)
{
    std::cout << "float: " << std::fixed << std::setprecision(prec) << numb << "f" << std::endl;
}

void impossibleConvertion()
{
    printf("HELLO");
    std::cout << "char: " << "Impossible" << std::endl;
    std::cout << "int: " << "Impossible" << std::endl;
    std::cout << "float: " << "Impossible" << std::endl;
    std::cout << "double: " << "Impossible" << std::endl;
}