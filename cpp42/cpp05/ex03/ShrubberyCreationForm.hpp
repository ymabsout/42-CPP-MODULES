#include "AForm.hpp"
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
class AForm;

class ShrubberyCreationForm : public AForm {
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& objs);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm& objs);

    void execute (Bureaucrat const & executor) const;

};

#endif