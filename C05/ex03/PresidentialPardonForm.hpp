#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class PresidentialPardonForm : public Form
{
    private :
        std::string target;
    public :
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &scf);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &scf);
        void    execute(Bureaucrat const &executor);
};

#endif