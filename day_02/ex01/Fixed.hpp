#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:
    Fixed();
    Fixed( const int );
    Fixed( const float );
    Fixed( const Fixed &oldObj );
    Fixed& operator=( Fixed const &fixed );
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