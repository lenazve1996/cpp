#include "Span.hpp"

Span::Span()
{
    std::cout << "Default constructor for Span called" << std::endl;
    _maxSize = 0;
}

Span::Span(unsigned int n)
{
    std::cout << "Constructor for Span called" << std::endl;
    _maxSize = n;
}

Span::Span(const Span &other)
{
    this->_vector = other._vector;
    this->_maxSize = other._maxSize;
}

Span &Span::operator=(const Span &other)
{
    this->_vector = other._vector;
    this->_maxSize = other._maxSize;
    return *this;
}

void Span::checkSize(int amount)
{
    if ((_vector.size() + amount) > _maxSize)
        throw std::range_error("Container is full");
}

void Span::addNumber(int numb)
{
    try
    {
        checkSize(1);
        _vector.push_back(numb);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

void Span::addManyNumbers(int amount)
{
    srand(time(0));
    try
    {
        checkSize(amount);
        for(int i = 0; i < amount; i++)
            addNumber(rand());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Span::insertManyNumbers(int amount, int value)
{
    srand(time(0));
    try
    {
        checkSize(amount);
        _vector.insert(_vector.end(), amount, value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan()
{
    unsigned int minSpan = UINT_MAX;
    unsigned int diff;
    try
    {
        if (_vector.size() < 2)
            throw Span::UnableFindSpan();
    }
    catch (std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
    std::vector<int>::iterator iter = _vector.begin();
    while (iter != _vector.end())
    {
        std::vector<int>::iterator iter2 = iter + 1;
        while(iter2 != _vector.end())
        {
            diff = std::abs(*iter - *iter2);
            if (diff < minSpan)
                minSpan = diff;
            iter2++;
        }
        iter++;
    }

    return minSpan;
}
int Span::longestSpan()
{
    try
    {
        if (_vector.size() < 2)
            throw Span::UnableFindSpan();
    }
    catch (std::exception &err)
    {
        std::cerr << err.what() << std::endl;
    }
    int min;
    int max;
    min = *min_element(_vector.begin(), _vector.end());
    max = *max_element(_vector.begin(), _vector.end());
    return max - min;
}

Span::~Span()
{
    std::cout << "Default destructor for Span called" << std::endl;
}
