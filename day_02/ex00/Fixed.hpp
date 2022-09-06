#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:
    Fixed( void );
    Fixed( const Fixed &oldObj );
    Fixed& operator=( Fixed const &fixed );
    ~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:

    int                 _raw_value;
    static const int    _fractBits = 8;

};

#endif