#include "Span.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    Span sp2 = sp;
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    std::cout << std::endl << ">>>>>>>>>> TEST 4 <<<<<<<<<<"  << std::endl << std::endl;
    Span sp3 = sp;
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;

    std::cout << std::endl << ">>>>>>>>>> TEST 5 <<<<<<<<<<"  << std::endl << std::endl;
    Span array = Span(20000);
    array.addManyNumbers(19800);
    array.insertManyNumbers(201, -4000);
    std::cout << array.shortestSpan() << std::endl;
    std::cout << array.longestSpan() << std::endl;
    return 0;
}