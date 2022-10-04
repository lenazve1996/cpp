#include "convertion.hpp"

void printChar(char c)
{
    displayChar(static_cast<long int>(c));
    displayInt(static_cast<long int>(c));
    displayFloat(static_cast<float>(c));
    displayDouble(static_cast<double>(c));
    exit(0);
}

void checkChar(std::string str)
{
    if (isprint(str[0]) && !isdigit(str[0]) && str.length() == 1)
    {
        printChar(str[0]);
    }
    else if (isprint(str[0]) && !isdigit(str[0]) \
    && isprint(str[1]) && !isdigit(str[1]) \
    && str != "nan" && str != "nanf" && \
    str != "-inf" && str != "+inf" && \
    str != "-inff" && str != "+inff" )
    {
        impossibleConvertion();
    }
}