#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    : Form("ShrubberyCreationForm", SIGN_SHRUB, EXECUTE_SHRUB)
{
    std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) 
    : Form("ShrubberyCreationForm", SIGN_SHRUB, EXECUTE_SHRUB, target)
{
    std::cout << "Constructor for ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &other )
    : Form( other.getName(), other.getSignGrade(), other.getExecuteGrade(), other.getTarget() )
{
    *this = other;
    return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
    this->setSigned(other.getSigned());
    this->setTarget(other.getTarget());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
    return;
}


void ShrubberyCreationForm::createShrubbery() const
{
    std::string outFile;
    std::ifstream inFile ("trees");
    std::ofstream file;
    outFile = this->getTarget() + "_shrubbery";
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
            this->createShrubbery();
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
