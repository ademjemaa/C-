#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
    this->target = target ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : Form("ShrubberyCreation", 145, 137)
{
    this->target = scf.target;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
    if (this != &scf)
    {
        this->target = scf.target;
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    Form::execute(executor);
    std::string const shrubName = (this->target + "_shrubbery");
    std::ofstream ofs (shrubName.c_str());
    ofs << "         v" << std::endl;
    ofs << "        >X<" << std::endl;
    ofs << "         A" << std::endl;
    ofs << "        d$b" << std::endl; 
    ofs << "      .d\\$$b." << std::endl;
    ofs << "    .d$i$$\\$$b." << std::endl;
    ofs << "       d$$@b" << std::endl;
    ofs << "      d\\$$$ib" << std::endl; 
    ofs << "    .d$$$\\$$$b" << std::endl;
    ofs << "  .d$$@$$$$\\$$ib." << std::endl;
    ofs << "      d$$i$$b" << std::endl;
    ofs << "     d\\$$$$@$b" << std::endl;
    ofs << "  .d$@$$\\$$$$$@b." << std::endl;
    ofs << ".d$$$$i$$$\\$$$$$$b." << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ###" << std::endl;
    ofs << "        ###" << std::endl;
    ofs.close();
}