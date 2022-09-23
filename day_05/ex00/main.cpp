#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    // Bureaucrat const Jack("Jack", 1456);
    // std::cout << Jack.getGrade() << std::endl;
    // std::cout << Jack.getName() << std::endl;
    // Bureaucrat Jack("Jack", 150);
    // std::cout << Jack.getGrade() << std::endl;
    // std::cout << Jack.getName() << std::endl;
    // --Jack;
    // std::cout << Jack.getGrade() << std::endl;
    // std::cout << Jack.getName() << std::endl;
    Bureaucrat Jack("Jack", 1);
    std::cout << Jack.getGrade() << std::endl;
    std::cout << Jack.getName() << std::endl;
    ++Jack;
    std::cout << Jack.getGrade() << std::endl;
    std::cout << Jack.getName() << std::endl;
}