#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default consctructor called" << std::endl;
    _raw_value = 0;
    return;
}

Fixed::Fixed( int const integer )
{
    std::cout << "Consctructor called for integer" << std::endl;
    std::cout << _raw_value << std::endl;
    _raw_value = integer << _fractBits;
    return;
}

Fixed::Fixed( float const number )
{
    std::cout << "Consctructor called for float" << std::endl;
    std::cout << _raw_value << std::endl;
    _raw_value = (int)(roundf(number * (1 << _fractBits)));
    return;
}

Fixed::Fixed( Fixed const &oldObj )
{
    std::cout << "Copy consctructor called" << std::endl;
    _raw_value = oldObj.getRawBits();
    return;
}

Fixed& Fixed::operator=( Fixed const &fixed )
{
    std::cout << "Assignation operator called" << std::endl;
    this->_raw_value = fixed.getRawBits();
    return  *this;
}

Fixed::~Fixed( void )
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

float Fixed::toFloat( void ) const
{
    float return_value = (float)_raw_value / (1 << _fractBits);
    return (return_value);
}

int Fixed::toInt( void ) const
{
    int int_value = (int)(_raw_value >> _fractBits);
    return (int_value);
}

std::ostream & operator<<( std::ostream & output, Fixed const &fixed)
{
    output << fixed.toFloat();
    return (output);
}