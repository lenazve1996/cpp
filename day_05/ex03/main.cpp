#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    ShrubberyCreationForm form1("home");
    std::cout << std::endl << form1;

    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;
    ShrubberyCreationForm form2(form1);
    std::cout << std::endl << form2;
    

    std::cout << std::endl << ">>>>>>>>>> TEST 3 <<<<<<<<<<"  << std::endl << std::endl;
    ShrubberyCreationForm form3("shop");
    form3 = form1;
    std::cout << std::endl << form3;

    std::cout << std::endl << ">>>>>>>>>> TEST 4 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Julia("Julia", 1);
    std::cout << std::endl << Julia;

    Bureaucrat John("John", 150);
    std::cout << std::endl << John;

    John.signForm(form1);
    Julia.signForm(form1);

    John.executeForm(form1);
    Julia.executeForm(form1);

    std::cout << std::endl << ">>>>>>>>>> TEST 5 <<<<<<<<<<"  << std::endl << std::endl;

    RobotomyRequestForm form4("Jacob");

    std::cout << std::endl << form4;

    John.executeForm(form4);

    std::cout << std::endl << ">>>>>>>>>> TEST 6 <<<<<<<<<<"  << std::endl << std::endl;

    Julia.signForm(form4);
    Julia.executeForm(form4);

    std::cout << std::endl << ">>>>>>>>>> TEST 7 <<<<<<<<<<"  << std::endl << std::endl;

    PresidentialPardonForm form5("Kevin Foster");
    std::cout << std::endl << form5;
    Julia.signForm(form5);
    Julia.executeForm(form5);
    return 0;
}