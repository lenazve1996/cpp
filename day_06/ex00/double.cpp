#include "convertion.hpp"

void printDouble(char *str)
{
    printf("HERE DOUBLE\n");
    double numb = strtod(str, NULL);
    int prec = findPrecision(str);
    displayChar(static_cast<char>(numb));
    std::cout << "int: " << static_cast<int>(round(numb)) << std::endl;
    displayFloat(static_cast<float>(numb), prec);
    std::cout << "double: " << std::fixed<< std::setprecision(prec) << numb << std::endl;
    exit(0);
}

float   isDouble(char *str)
{
    char* pEnd;
    double numb = strtod(str, &pEnd);
    std::cout << numb << std::endl;
    std::cout << ">>>" << *pEnd << std::endl;
    if (*pEnd != '\0')
    {
        impossibleConvertion();
        std::cout << "here_double_failed" << std::endl;
        exit(0);
    }
    else
        printDouble(str);
    return numb;
}