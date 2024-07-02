#include <iostream>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
    private:
        const std::string name;
        short grade;

    public:
        Bureaucrat();
        Bureaucrat(short grade);
        Bureaucrat(Bureaucrat &objs);
        Bureaucrat &operator=(Bureaucrat&);
        const std::string getName();
        short   getGrade();
        ~Bureaucrat();
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
                    return("Grade too low for the bureaucraft");
                }
        };
};

std::ostream &operator <<(std::ostream &op, const Bureaucrat&);

#endif