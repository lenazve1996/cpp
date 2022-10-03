#include "convertion.hpp"

void printFloat(char *str)
{
    printf("HERE FLOAT\n");
    float numb = strtof(str, NULL);
    int prec = findPrecision(str);
    displayChar(static_cast<char>(numb));
    std::cout << "int: " << static_cast<int>(round(numb)) << std::endl;
    displayFloat(numb, prec);
    std::cout << "double: " << static_cast<double>(numb) << std::endl;
    exit(0);
}


bool floatError(char *s, char pEnd)
{
    std::string str(s);

    unsigned long point_occur = str.find('.');
    if (point_occur == std::string::npos && pEnd == 'f')
        return 1;
    return 0;
}

float   isFloat(char *str)
{
    char* pEnd;
    float numb = strtof(str, &pEnd);
    std::cout << numb << std::endl;
    std::cout << ">>>" << *pEnd << std::endl;
    if ((*pEnd != '\0' && *pEnd != 'f') || floatError(str, *pEnd))
    {
        impossibleConvertion();
        exit(0);
    }
    else
        printFloat(str);
    return numb;
}