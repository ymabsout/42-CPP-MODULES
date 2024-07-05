#include <iostream>
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
    private:
        const std::string name;
        bool ifsigned;
        const short gradeToSign;
        const short gradeToExecute;

    public:
        AForm();
        AForm(const std::string name, short toSign, short toExecute);
        AForm(AForm& objs);
        AForm &operator=(const AForm &);
        virtual ~AForm();

        class GradeTooHighException : public std::exception{
            public:
                const char * what() const _NOEXCEPT;
        };

        class GradeTooLowException : public std::exception{
            public:
                const char * what() const _NOEXCEPT;
        };

        class FormNotSigned : public std::exception {
        public: 
            const char * what() const _NOEXCEPT;
        };

        std::string getName() const;
        bool checkIfSigned() const;
        virtual void execute (Bureaucrat const & executor) const = 0;
        short getGradeToSign() const;
        short getGradeToExecute() const ;
        virtual void beSigned(const Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream& op, AForm& objs);

#endif 