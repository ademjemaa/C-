/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 21:29:11 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/13 00:16:58 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int signGrade, int executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw	Form::GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw	Form::GradeTooLowException();
	this->name = name;
	this->signGrade = signGrade;
	this->executeGrade = executeGrade;
   	this->signed = false;	
}

Form::~Form(void)
{
	return ;
}

Form::Form(const Form &form)
{
	*this = form;
}

Form	&Form::operator=(Form const &form)
{
	if (this != &form)
	{
		this->name = form.name;
		this->signGrade = form.signGrade;
		this->executeGrade = form.executeGrade;
	}
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSigned(void) const
{
	return (this->signed);
}

int		Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int		Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception : the grade is too High\n");
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception : the grade is too low\n");
}

void	Form::beSigned(Bureaucrat &bure)
{
	if (this.signed == false)
		bure.signForm(this);
	return ;
}
