#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
   
    std::cout << a << std::endl << std::endl;
    std::cout << ++a << std::endl << std::endl;
    std::cout << a << std::endl << std::endl;
    std::cout << a++ << std::endl << std::endl;
    std::cout << a << std::endl << std::endl;
    std::cout << b << std::endl << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl << std::endl;

    Fixed c( Fixed (0.2f));
    std::cout << c << std::endl << std::endl;

    Fixed d( Fixed (0.2f));
    std::cout << d << std::endl << std::endl;


    Fixed e = c * d;
    std::cout << e << std::endl << std::endl;
    e = c + d;
    std::cout << e << std::endl << std::endl;
    e = c - d;
    std::cout << e << std::endl << std::endl;
    e = c / d;
    std::cout << e << std::endl << std::endl;


    std::cout << "e < c: " << (e < c) << std::endl << std::endl;
    std::cout << "e > c: " << (e > c) << std::endl << std::endl;
    std::cout << "e == c: " << (e == c) << std::endl << std::endl;
    std::cout << "e >= e: " << (e >= e) << std::endl << std::endl;
    std::cout << "e <= e: " << (e <= e) << std::endl << std::endl;
    std::cout << "e != c: " << (e != c) << std::endl << std::endl;

    std::cout << "MAX:" << std::endl << Fixed::max( e, c ) << std::endl << std::endl;
    std::cout << "MIN:" << std::endl << Fixed::min( e, c ) << std::endl << std::endl;


    std::cout << "DECREMENT:" << std::endl << e << std::endl;
    std::cout << --e << std::endl;
    std::cout << e << std::endl;
    std::cout << e-- << std::endl;
    std::cout << e << std::endl;

   return 0;
}