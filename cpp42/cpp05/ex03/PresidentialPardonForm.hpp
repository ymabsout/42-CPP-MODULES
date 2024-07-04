#include "AForm.hpp"
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class AForm;

class PresidentialPardonForm : public AForm {

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &);
        PresidentialPardonForm &operator=(PresidentialPardonForm &);

        void execute(Bureaucrat const & executor) const;
};

#endif