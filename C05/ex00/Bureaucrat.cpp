#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    this->grade = grade;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bure)
{
    *this = bure;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &bure)
{
    if (this != &bure)
    {
        this->name  = bure.name;
        this->grade = bure.grade;
    }
    return (*this);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

void Bureaucrat::incrementBureaucrat(void)
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrementBureaucrat(void)
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: The Grade is too high\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: The Grade is too low\n";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat <" << bureaucrat.getName() << "> : Grade " << bureaucrat.getGrade() << "\n";
	return (out);
}