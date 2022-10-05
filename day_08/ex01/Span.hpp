#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

class Span
{
public:
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    void addNumber(int numb);
    void addManyNumbers(int amount);
    void insertManyNumbers(int amount, int value);
    int shortestSpan();
    int longestSpan();
    void checkSize(int amount);
    ~Span();

    class UnableFindSpan : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return "There are not enough numbers to find out span";
            }
    };

private:
    std::vector<int> _vector;
    unsigned int _maxSize;
};

#endif