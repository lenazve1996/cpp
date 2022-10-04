#include "convertion.hpp"

int findPrecisionDouble(char *s)
{
    std::string str(s);
    unsigned long point_occur = str.find('.');
    if (point_occur != std::string::npos)
    {
        return (str.length() - point_occur - 1);
    }
    else
        return 0;
}

void printDouble(char *str)
{
    double numb = strtod(str, NULL);
    displayChar(static_cast<long int>(numb));
    if (isnan(numb) || isinf(numb))
        displayInt(-2147483649);
    else
        displayInt(static_cast<long int>(round(numb)));
    displayFloat(static_cast<float>(numb));
    displayDouble(static_cast<double>(numb));
    exit(0);
}

void   checkDouble(char *str)
{
    char* pEnd;
    strtod(str, &pEnd);
    if (*pEnd != '\0')
    {
        impossibleConvertion();
    }
    else
        printDouble(str);
    return;
}