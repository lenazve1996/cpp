#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << std::endl << ">>>>>>>>>> TEST 1 <<<<<<<<<<"  << std::endl << std::endl;
    Intern intern1;
    Form *form1 = intern1.makeForm("pardon request", "Kevin Foster");
    std::cout << std::endl << *form1;

    std::cout << std::endl << ">>>>>>>>>> TEST 2 <<<<<<<<<<"  << std::endl << std::endl;

    Form *form2 = intern1.makeForm("WrongForm", "Some target");
    std::cout << form2 << std::endl;

    std::cout << std::endl << ">>>>>>>>>> TEST 3 <<<<<<<<<<"  << std::endl << std::endl;
    Bureaucrat Julia("Julia", 5);
    std::cout << std::endl << Julia;
    Julia.signForm(*form1);
    Julia.executeForm(*form1);

    Intern intern2(intern1);
    delete form1;
    
    return 0;
}