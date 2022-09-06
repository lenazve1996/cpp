#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default consctructor called" << std::endl;
    _raw_value = 0;
    return;
}

Fixed::Fixed( const Fixed &oldObj )
{
    std::cout << "Copy consctructor called" << std::endl;
    _raw_value = oldObj.getRawBits();
    return;
}

Fixed& Fixed::operator=( Fixed const &fixed )
{
    std::cout << "Copy assignment operator called" << std::endl;
    _raw_value = fixed.getRawBits();
    return  *this;
}

Fixed::~Fixed()
{
    std::cout << "Desctructor called" << std::endl;
    return;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_raw_value);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _raw_value = raw;
}
