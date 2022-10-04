#include "convertion.hpp"

void displayChar(long int symbol)
{
    if (symbol < 0 || symbol > 127)
        std::cout << "char: " << "Impossible" << std::endl;
    else if (isprint(symbol))
        std::cout << "char: \'" << static_cast<char>(symbol) << "\'" << std::endl;
    else
        std::cout << "char: " << "Non displayable" << std::endl;
}

void displayFloat(float numb)
{
    float dif;
    if (numb < 0)
        dif = (numb * -1) - (static_cast<int>(numb) * -1);
    else
        dif = numb - static_cast<int>(numb);
    if (dif > 0)
        std::cout << "float: " << numb << "f" << std::endl;
    else 
        std::cout << "float: " << numb << ".0f" << std::endl;
}

void displayDouble(double numb)
{
    double dif;
    if (numb < 0)
        dif = (numb * -1) - (static_cast<int>(numb) * -1);
    else
        dif = numb - static_cast<int>(numb);
    if (dif > 0)
        std::cout << "double: " << numb << std::endl;
    else 
        std::cout << "double: " << numb << ".0" << std::endl;
}

void impossibleConvertion()
{
    std::cout << "char: " << "Impossible" << std::endl;
    std::cout << "int: " << "Impossible" << std::endl;
    std::cout << "float: " << "Impossible" << std::endl;
    std::cout << "double: " << "Impossible" << std::endl;
    exit(0);
}