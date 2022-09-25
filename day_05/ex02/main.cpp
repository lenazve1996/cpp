#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    ShrubberyCreationForm form1("Form1");
    std::cout << std::endl << form1;

    ShrubberyCreationForm form2(form1);
    std::cout << std::endl << form2;


    ShrubberyCreationForm form3("form3");
    form3 = form1;
    std::cout << std::endl << form3;

    // Bureaucrat Julia("Julia", 135);
    // std::cout << std::endl << Julia;

    // Bureaucrat John("John", 150);
    // std::cout << std::endl << John;

    // John.signForm(form1);
    // Julia.signForm(form1);

    // John.executeForm(form1);
    // Julia.executeForm(form1);
    return 0;
}