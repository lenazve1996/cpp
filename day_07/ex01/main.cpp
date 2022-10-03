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