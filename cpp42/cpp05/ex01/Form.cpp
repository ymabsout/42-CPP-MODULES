#include "Form.hpp"

Form::Form() : name("Default"), ifsigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "Default Form constructor called " << std::endl;
}

Form::Form(std::string name, short toSign, short toExecute): name(name), gradeToSign(toSign), gradeToExecute(toExecute){
    if (toSign  > 150|| toExecute > 150)
        throw (GradeTooLowException());
    else if (toSign < 1|| toExecute < 1)
        throw (GradeTooHighException());
    else{
        ifsigned = false;
        std::cout << name << " Form constructor called " << std::endl;
    }
}

Form::~Form(){
    std::cout << name << " Form Destructor called " << std::endl;
}

Form::Form(Form &objs) : name(objs.getName()), ifsigned(objs.checkIfSigned()), gradeToSign(objs.getGradeToSign()), gradeToExecute(objs.getGradeToExecute()){
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &objs){
    if (this != &objs)
        ifsigned = objs.ifsigned;
    return (*this);
}

std::string Form::getName() const{
    return(name);
}

bool Form::checkIfSigned(){
    return (ifsigned);
}

short Form::getGradeToExecute() const{
    return (gradeToExecute);
}

short Form::getGradeToSign() const{
    return (gradeToSign);
}

void Form::beSigned(const Bureaucrat &obj) {
    if (obj.getGrade() <= getGradeToSign()){
        ifsigned = true;
        obj.signForm(*this);
    }
    else
        throw(GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT{
    return ("Form Grade too High");
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT{
    return ("Form Grade too low");
}

std::ostream &operator<<(std::ostream &op, Form& objs){
    op << "Form's name " << objs.getName() << std::endl;
    op << (objs.checkIfSigned() ?  "Form is signed" : "Form is not signed") << std::endl;
    op << "Form's grade to sign " << objs.getGradeToSign()  << std::endl;
    op << "Form's grade to execute " << objs.getGradeToExecute();
    return (op);
}