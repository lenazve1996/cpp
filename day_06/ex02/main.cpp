#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate( void )
{
    int random_val = rand() % 3;
    if (random_val == 0)
    {
        std::cout << "A" << std::endl;
        return new A;
    }
    else if (random_val == 2)
    {
        std::cout << "B" << std::endl;
        return new B;
    }
    else
    {
        std::cout << "C" << std::endl;
        return new C;
    }
}

void identify( Base* p )
{

    if (dynamic_cast<A*>(p))
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type is C" << std::endl;

}

void identify(Base& p)
{
    Base base;
    try
    {
        base = dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
    }
    catch(const std::bad_cast &err)
    {
        try 
        {
            base = dynamic_cast<B&>(p);
            std::cout << "Type is B" << std::endl;
        }
        catch (const std::bad_cast &err)
        {
            try 
            {
                base = dynamic_cast<C&>(p);
                std::cout << "Type is C" << std::endl;
            }
            catch(const std::bad_cast &err)
            {
                std::cerr << err.what() << std::endl;
            }
        }
    }
}

int main()
{
    srand(time(0));

    Base *childs[3];
    for (int i = 0; i < 3; i++)
    {
        childs[i] = generate();
    }
    std::cout << std::endl; 
    for (int i = 0; i < 3; i++)
    {
        identify(childs[i]);
    }
    std::cout << std::endl; 
    for (int i = 0; i < 3; i++)
    {
        identify(*childs[i]);
    }
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        delete childs[i];
    }
    return 0;
}