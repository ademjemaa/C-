#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat{
    private :
        std::string name;
        int grade;
    public :
        Bureaucrat(std::string name, int grade);
    	virtual ~Bureaucrat();
	    Bureaucrat(Bureaucrat const &bure);
	    Bureaucrat &operator=(Bureaucrat const &bure);
    	int getGrade(void) const;
    	std::string getName(void) const;
        void incrementBureaucrat(void);
        void decrementBureaucrat(void);
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw();
        };
};
std::ostream    &operator<<(std::ostream &output, Bureaucrat const &bure);
#endif 