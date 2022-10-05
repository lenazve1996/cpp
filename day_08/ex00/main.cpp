#include "easyfind.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    std::array<int, 4> numbers =  { 5, 10, 20, 55 };
    try
    {
        std::array<int, 4>::const_iterator iter1 = easyfind(numbers, 20);
        std::cout << *iter1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    std::list<int> numb_list;
    numb_list.push_back(3);
    numb_list.push_back(83);
    numb_list.push_back(3456);
    try
    {
        std::list<int>::const_iterator iter2 = easyfind(numb_list, 83);
        std::cout << *iter2 << std::endl << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}