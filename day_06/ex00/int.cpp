#include "convertion.hpp"

void printInt(std::string str)
{
    printf("HERE INT\n");
    int numb = std::stoi(str, NULL);
    displayChar(static_cast<char>(numb));
    std::cout << "int: " << numb << std::endl;
    displayFloat(static_cast<float>(numb), 1);
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numb) << std::endl;
    exit(0);
}

bool isInt(std::string str)
{
    int i = 0;

    if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '+')
        return 0;
    i++;
    while(str[i])
    {
        if (std::isdigit(str[i]))
            i++;
        else
            return 0;
    }
    try
    {
        int numb;
        numb = std::stoi(str, NULL);
    }
    catch(std::invalid_argument &err)
    {
        return 0;
    }
    return 1;
}