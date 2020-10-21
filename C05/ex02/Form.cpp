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

Form::Form(const std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw	Form::GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw	Form::GradeTooLowException();
   	this->sign = false;	
}

Form::~Form(void)
{
	return ;
}

Form::Form(Form const &form) : name(form.name), signGrade(form.signGrade), executeGrade(form.executeGrade)
{
	*this = form;
}

Form	&Form::operator=(Form const &form)
{
	if (this != &form)
	{
		this->sign = form.sign;
	}
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSign(void) const
{
	return (this->sign);
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
	return ("Exception : the Form grade is too High\n");
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception : the Form grade is too low\n");
}

const	char* Form::FormNotSignedException::what() const throw()
{
	return ("Exception : Form is not signed and thus non executable\n");
}

void	Form::beSigned(Bureaucrat const &bure)
{
	if (this->sign == false && bure.getGrade() <= this->signGrade)
		this->sign = true;
	return ;
}

void    Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->executeGrade)
		throw Form::GradeTooLowException();
	if (!this->sign)
		throw Form::FormNotSignedException();
}

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << 	"the form \"" << form.getName() << "\"";
	if (form.getSign() == true)
		out << " is signed, ";
	else
		out << " isn't signed, however, ";
	out << "its signing grade is : " << form.getSignGrade() << " and its execution grade is : " << form.getExecuteGrade() << "\n";
	return (out);
}