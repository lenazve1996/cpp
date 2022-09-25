#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("name not assigned", 145, 137)
{
    std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : \
Form(target, 145, 137)
{
    std::cout << "Constructor for ShrubberyCreationForm "<< target << " called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other ) : \
Form( other.getName(), other.getSignGrade(), other.getExecuteGrade() )
{
    *this = other;
    return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
    (void)other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
    return;
}

void ShrubberyCreationForm::createSrubbery() const
{
    std::string outFile;
    std::ifstream inFile ("trees");
    std::ofstream file;
    outFile = this->getName() + "_shrubbery";
    if (inFile.is_open())
    {
        file.open(outFile);
        file << inFile.rdbuf();
    }
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
        {
            this->createSrubbery();
        }
        else
        {
            throw GradeTooLowException();
        }
    }
    else
    {
        throw FormIsNotSigned();
    }
}
