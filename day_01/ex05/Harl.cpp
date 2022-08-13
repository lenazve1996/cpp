#include "Harl.hpp"

Harl::Harl()
{
    std::cout << std::endl;
    std::cout << "Harl constructor called" << std::endl;
    std::cout << std::endl;
    return;
}

Harl::~Harl()
{
    std::cout << "Harl destructor called" << std::endl;
    std::cout << std::endl;
    return;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my burger." << std::endl;
    std::cout << "I really do!" << std::endl;
    std::cout << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
    std::cout << "I’ve been coming for years." << std::endl;
    std::cout << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
    std::cout << std::endl;
}
void Harl::complain( std::string level )
{

    void (Harl::*funcs[4])(void) = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
    };

    std::string complains [4] = {
    "debug",
    "info",
    "warning",
    "error"
    };

    for (int numb = 0; numb < 4; numb++)
    {
        if (level == complains[numb])
            (this->*funcs[numb])();
    }
}