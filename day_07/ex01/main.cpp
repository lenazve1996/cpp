#include "iter.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    int numbers[3] = {15, 279, 3361};
    iter(numbers, 3, print_arr);

    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    std::string animals[2] = {"cat", "dog"};
    iter(animals, 2, print_arr);

    std::cout << std::endl << ">>>>>>>>>> TEST 3 <<<<<<<<<<"  << std::endl << std::endl;
    char symbols[5] = {'H', 'e', 'l', 'l', 'o'};
    iter(symbols, 5, print_arr);
    return 0;
}

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return;}

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }