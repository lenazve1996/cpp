#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    Form form1("Form1", 200, 200);
    std::cout << std::endl << form1 << std::endl;

    std::cout << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    Form form2("Form2", 200, 10);
    std::cout << std::endl << form2 << std::endl;

    std::cout << ">>>>>>>>>> TEST 3 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Julia("Julia", 25);
    std::cout << std::endl << Julia << std::endl;

    Bureaucrat John("John", 150);
    std::cout << std::endl << John << std::endl;

    Form form3("Form3", 25, 25);
    std::cout << std::endl << form3 << std::endl;

    John.signForm(form3);
    std::cout << form3 << std::endl;
    Julia.signForm(form3);
    return 0;
}