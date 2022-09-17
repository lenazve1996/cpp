#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat Jack("Jack", 10);
    std::cout << Jack.getGrade() << std::endl;
    std::cout << Jack.getName() << std::endl;
}