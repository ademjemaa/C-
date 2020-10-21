#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>  


class ShrubberyCreationForm : public Form
{
    private :
        std::string target;
    public :
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &scf);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);
        void    execute(Bureaucrat const &executor);
};

#endif