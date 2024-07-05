#include "AForm.hpp"

AForm::AForm() : name("Default"), ifsigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "Default AForm constructor called " << std::endl;
}

AForm::AForm(std::string name, short toSign, short toExecute): name(name), gradeToSign(toSign), gradeToExecute(toExecute){
    if (toSign  > 150|| toExecute > 150)
        throw (GradeTooLowException());
    else if (toSign < 1|| toExecute < 1)
        throw (GradeTooHighException());
    else{
        ifsigned = false;
        std::cout << name << " AForm constructor called " << std::endl;
    }
}

AForm::~AForm(){
    std::cout << name << " AForm Destructor called " << std::endl;
}

AForm::AForm(AForm &objs) : name(objs.getName()), ifsigned(objs.checkIfSigned()), gradeToSign(objs.getGradeToSign()), gradeToExecute(objs.getGradeToExecute()){
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &objs){
    if (this != &objs){
        ifsigned = objs.ifsigned;
    }
    return (*this);
}

std::string AForm::getName() const{
    return(name);
}

bool AForm::checkIfSigned() const{
    return (ifsigned);
}

short AForm::getGradeToExecute() const{
    return (gradeToExecute);
}

short AForm::getGradeToSign() const{
    return (gradeToSign);
}

void AForm::beSigned(const Bureaucrat &obj) {
    if (obj.getGrade() <= getGradeToSign()){
        ifsigned = true;
        obj.signAForm(*this);
    }
    else
        throw(GradeTooLowException());
}

const char *AForm::GradeTooHighException::what() const _NOEXCEPT{
    return ("Form Grade too High");
}

const char *AForm::GradeTooLowException::what() const _NOEXCEPT{
    return ("Form Grade too low");
}

const char *AForm::FormNotSigned::what() const _NOEXCEPT{
    return ("Form is NOT signed or Grade too low/high to execute");
}

std::ostream &operator<<(std::ostream &op, AForm& objs){
    op << "AForm's name " << objs.getName() << std::endl;
    op << (objs.checkIfSigned() ?  "AForm is signed" : "AForm is not signed") << std::endl;
    op << "AForm's grade to sign " << objs.getGradeToSign()  << std::endl;
    op << "AForm's grade to execute " << objs.getGradeToExecute();
    return (op);
}