/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 20:21:34 by adjemaa           #+#    #+#             */
/*   Updated: 2020/10/12 20:21:35 by adjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private :
        const std::string name;
        bool signed;
        const int   signGrade;
        const int   executeGrade;
    public :
        Form(const std::string name, int signGrade, int executeGrade);
        virtual ~Form(void);
        Form(const Form &form);
        Form &operator=(const Form &form);
        const   std::string getName(void) const;
        bool    getSigned(void) const;
        int     getSignGrade(void) const;
        int     getExecuteGrade(void) const;
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw();
        };
        void    beSigned(Bureaucrat &bure);

};

std::ostream& operator<<(std::ostream& outStream, const Form& form);

#endif
