#include "convertion.hpp"

void printFloat(char *str)
{
    float numb = strtof(str, NULL);
    displayChar(static_cast<long int>(numb));
    if (isnan(numb) || isinf(numb))
        displayInt(-2147483649);
    else
        displayInt(static_cast<long int>(round(numb)));
    displayFloat(numb);
    displayDouble(static_cast<double>(numb));
    exit(0);
}


bool floatError(char *s, char *pEnd)
{
    std::string str(s);

    if (strlen(pEnd) > 1)
        return 1;
    unsigned long point_occur = str.find('.');
    if (point_occur == std::string::npos && *pEnd == 'f' \
    && str != "-inff" && str != "+inff" && str != "nanf")
        return 1;
    return 0;
}

bool FNotFound(char *s)
{
    std::string str(s);

    if (str.find('f') == std::string::npos)
        return 1;
    return 0;
}

void   checkFloat(char *str)
{
    char* pEnd;
    if (FNotFound(str))
        return;
    strtof(str, &pEnd);
    if ((*pEnd != '\0' && *pEnd != 'f') || floatError(str, pEnd))
    {
        impossibleConvertion();
    }
    else
        printFloat(str);
    return;
}