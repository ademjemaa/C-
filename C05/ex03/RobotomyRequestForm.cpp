#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &scf) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = scf.target;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &scf)
{
    if (this != &scf)
    {
        this->target = scf.target;
    }
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    Form::execute(executor);
    std::cout << "VRRRRRRRR...KRRRRR..KRUNNNNNNCKKKKK\n";
    srand (time(NULL));
    int rando = rand() % 2;
    if (rando == 1)
        std::cout << this->target + " has been robotomized successfully\n";
    else
        std::cout << this->target + "hasn't been robotomized successfully\n";
}