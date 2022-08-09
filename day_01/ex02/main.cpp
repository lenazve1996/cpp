#include <iostream>

int main()
{
    std::string greeting = "HI THIS IS BRAIN";
    std::string* stringPTR = &greeting;
    std::string& stringREF = greeting;

    std::cout << std::endl;

    std::cout << &greeting << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << greeting << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
    std::cout << std::endl;

}