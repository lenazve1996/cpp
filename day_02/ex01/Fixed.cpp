#include "Fixed.hpp"

Fixed::Fixed( const int integer )
{
    std::cout << "Default consctructor called" << std::endl;
    _fixedPoint = integer;
    return;
}

Fixed::Fixed( const float number )
{
    std::cout << "Default consctructor called" << std::endl;
    _fixedPoint = number;
    return;
}

Fixed::Fixed( const Fixed &oldObj )
{
    std::cout << "Copy consctructor called" << std::endl;
    _fixedPoint = oldObj._fixedPoint;
    return;
}

Fixed& Fixed::operator=( const Fixed &fixed )
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPoint = fixed._fixedPoint;
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
    return (_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPoint = raw;
}

int Fixed::toInt( void ) const
{
    this->_fixedPoint = (int)_fixedPoint;
}