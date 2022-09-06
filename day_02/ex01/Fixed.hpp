#ifndef FIXED_H
# define FIXED_H

#include <cmath>
#include <iostream>

class Fixed {

public:
    Fixed();
    Fixed( int const );
    Fixed( float const );
    Fixed( Fixed const &oldObj );
    Fixed& operator=( Fixed const &fixed );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private:

    int                 _raw_value;
    static const int    _fractBits = 8;

};

std::ostream & operator<<( std::ostream & output, Fixed const &fixed);

#endif