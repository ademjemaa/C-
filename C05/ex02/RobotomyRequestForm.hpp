#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
    private :
        std::string target;
    public :
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &scf);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &scf);
        void    execute(Bureaucrat const &executor);
};

#endif