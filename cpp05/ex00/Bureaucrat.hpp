#include <iostream>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat {
    private:
        const std::string name;
        short grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, short grade);
        Bureaucrat(Bureaucrat &objs);
        Bureaucrat &operator=(Bureaucrat&);
        ~Bureaucrat();
        const std::string getName();
        short   getGrade();
        void incrementGrade();
        void decrementGrade();
        class GradeTooHighException : public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };
        class GradeTooLowException : public std::exception{
            public:
                const char *what() const _NOEXCEPT;
        };
};

std::ostream &operator <<(std::ostream &op, Bureaucrat&);

#endif