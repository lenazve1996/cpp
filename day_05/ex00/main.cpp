#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat const Jack("Jack", 1456);

    std::cout << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Julia("Julia", 150);
    std::cout << std::endl << Julia << std::endl;
    --Julia;

    std::cout << ">>>>>>>>>> TEST 4 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Jacob("Jacob", 150);
    std::cout << std::endl << Jacob;
    ++Jacob;
    std::cout << std::endl << Jacob << std::endl;

    std::cout << ">>>>>>>>>> TEST 5 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Jane("Jane", 1);
    std::cout << std::endl << Jane << std::endl;
    ++Jane;
}