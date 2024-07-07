#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &objs){
    (void)objs;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &objs){
    (void)objs;
    return (*this);
}

const char * Intern::unexistantForm::what() const _NOEXCEPT{
    return ("No matching form name");
}

AForm* Intern::makeForm(std::string formName, std::string formTarget){
    AForm *forms[3] = {new PresidentialPardonForm(formTarget), new RobotomyRequestForm(formTarget), new ShrubberyCreationForm(formTarget)};
    std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    for (int i = 0 ; i < 3 ; i++){
        if(formName == names[i]){
            for (int j = 0 ; j < 3; j++){
                if (j != i)
                    delete forms[j];
            }
            return (forms[i]);
        }
    }
    for (int i = 0 ; i < 3 ; i++)
        delete forms[i];
    throw(unexistantForm());
}