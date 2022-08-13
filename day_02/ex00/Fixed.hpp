#ifndef FIXED_H
# define FIXED_H

// #include <string>
#include <iostream>

class Fixed {

public:
    Fixed();
    Fixed( const Fixed &oldObj );
    Fixed& operator=( const Fixed &fixed );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:

    int                 _fixedPoint;
    static const int    _fractBits = 8;

};

#endif