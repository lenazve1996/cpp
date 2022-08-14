#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed &oldObj );
    Fixed& operator=( const Fixed &fixed );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

private:

    int                 _fixedPoint;
    static const int    _fractBits = 8;

};

#endif