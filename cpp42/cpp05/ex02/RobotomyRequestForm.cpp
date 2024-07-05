#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45){
    std::cout << "Default RobotomyRequestForm Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45){
    std::cout << target << " Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm " << getName() << " Destructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & objs) : AForm(objs.getName(), objs.getGradeToSign(), objs.getGradeToExecute()){
    std::cout << "RobotomyRequestForm Copy constructor called " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm & objs){
    (void)objs;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    static int i;
    if (checkIfSigned() && executor.getGrade() <= getGradeToSign()){
        std::cout << "Drilling noises zzzzzzzzzzz " << std::endl;
        if (i % 2){
            std::cout << getName() << " has been Robotomized successfully" << std::endl;
        }
        else
            std::cout << "Robotomy failed " << std::endl;
        ++i;
    }
    else
        throw (FormNotSigned());
}
