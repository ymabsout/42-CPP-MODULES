#include <iostream>
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"

class Form;
class Bureaucrat {
    private:
        const std::string name;
        short grade;

    public:
        Bureaucrat();
        Bureaucrat(short grade);
        Bureaucrat(Bureaucrat &objs);
        Bureaucrat &operator=(Bureaucrat&);
        ~Bureaucrat();

        std::string getName() const;
        short   getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const _NOEXCEPT{
                    return("Grade too high for the bureaucrat");
                }
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const _NOEXCEPT{
                    return("Grade too low for the bureaucrat");
                }
        };
        void signForm(Form &objs) const;
        };

std::ostream &operator <<(std::ostream &op, const Bureaucrat&);

#endif