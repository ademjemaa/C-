/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:21:18 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/21 12:48:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
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

Bureaucrat::Bureaucrat(Bureaucrat const &bure) : name(bure.name) , grade(bure.grade)
{
    *this = bure;
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &bure)
{
    if (this != &bure)
    {
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
	return "Exception: The Bureaucrat Grade is too high\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: The Bureaucrat Grade is too low\n";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat <" << bureaucrat.getName() << "> : Grade " << bureaucrat.getGrade() << "\n";
	return (out);
}

void    Bureaucrat::signForm(Form &form)
{
    if (form.getSign() == true)
        std::cout << this->name + " cannot sign " + form.getName() + " because this form is already signed\n";
    else if (form.getSignGrade() < this->grade)
        std::cout << this->name + " cannot sign " + form.getName() + " because his grade is too low\n";
    else
    {
        std::cout << this->name + " signs the " + form.getName() + " form\n";
        form.beSigned(*this);
    }
    
}

void Bureaucrat::executeForm(Form const &form)
{
    if (form.getSign() == false)
        std::cout << this->name + " cannot execute " + form.getName() + " because this form isn't signed\n";
    else if (form.getExecuteGrade() < this->grade)
        std::cout << this->name + " cannot execute " + form.getName() + " because his grade is too low\n";
    else
        std::cout << this->name + " executes the " + form.getName() + " form\n";
    form.execute(*this);
}
