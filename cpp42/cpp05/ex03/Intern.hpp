#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef INTERN_HPP
#define INTERN_HPP

class Intern {
    public:
        Intern();
        ~Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        AForm * makeForm(std::string formName, std::string formTarget);
        class unexistantForm: public std::exception {
            public:
                const char * what() const _NOEXCEPT;
        };
};

#endif