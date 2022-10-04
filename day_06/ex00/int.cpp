#include "convertion.hpp"

void displayInt(long int numb)
{
    if (numb > 2147483647 || numb < -2147483648)
        std::cout << "int: Imposiible" << std::endl;
    else
        std::cout << "int: " << numb << std::endl;
}

void printInt(std::string str)
{
    long int numb = std::stoi(str, NULL);
    displayChar(numb);
    displayInt(numb);
    displayFloat(static_cast<float>(numb));
    displayDouble(static_cast<double>(numb));
    exit(0);
}

void checkInt(char *s)
{
    std::string str(s);
    int i = 0;

    if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '+')
        return;
    i++;
    while(str[i])
    {
        if (std::isdigit(str[i]))
            i++;
        else
            return;
    }
    try
    {
        int numb;
        numb = std::stoi(str, NULL);
    }
    catch(std::invalid_argument &err)
    {
        return;
    }
    catch(std::out_of_range &err)
    {
        std::cout << "char: Imposiible" << std::endl;
        std::cout << "int: Imposiible" << std::endl;
        displayFloat(strtof(s, NULL));
        displayDouble(strtod(s, NULL));
        exit(0);
    }
    printInt(str);
    return;
}