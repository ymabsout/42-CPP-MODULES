#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("Default Presidential", 25 , 5){
    std::cout << "Presidential Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5){
    std::cout << target << " Presidential Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "Presidential " << getName() << "destructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & obj) : AForm(obj.getName(), obj.getGradeToSign(), obj.getGradeToExecute()){
    std::cout << "Presidential copy consturctor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm & objs){
    (void)objs;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (checkIfSigned() && executor.getGrade() <= getGradeToExecute())
    {
        std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw(FormNotSigned());
}
