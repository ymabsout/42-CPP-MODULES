#include <iostream>
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool ifsigned;
        const short gradeToSign;
        const short gradeToExecute;

    public:
        Form();
        Form(const std::string name, short toSign, short toExecute);
        Form(Form& objs);
        Form &operator=(const Form &);
        ~Form();

        class GradeTooHighException : public std::exception{
            public:
                const char * what() const _NOEXCEPT;
        };

        class GradeTooLowException : public std::exception{
            public:
                const char * what() const _NOEXCEPT;
        };

        std::string getName() const;
        bool checkIfSigned();
        short getGradeToSign() const;
        short getGradeToExecute() const ;
        void beSigned(const Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream& op, Form& objs);

#endif 