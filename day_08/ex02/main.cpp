#include "MutantStack.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    
    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    MutantStack<int> s(mstack);
    it = s.begin();
    ite = s.end();
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    return 0;
}