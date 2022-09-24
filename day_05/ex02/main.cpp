#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    ShrubberyCreationForm form1("Form1");
    std::cout << std::endl << form1 << std::endl;

    Bureaucrat Julia("Julia", 145);
    std::cout << std::endl << Julia << std::endl;

    Bureaucrat John("John", 150);
    std::cout << std::endl << John << std::endl;

    form1.beSigned(John);
    std::cout << std::endl;
    form1.beSigned(Julia);
    std::cout << std::endl;

    return 0;
}