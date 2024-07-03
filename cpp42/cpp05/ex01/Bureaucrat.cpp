#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
	std::cout << "Bureaucraft default constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(short grade): name("NoName"), grade(grade){
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		std::cout << name << " construct called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &objs) : name(objs.getName()), grade(objs.getGrade()){
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &objs){
	if (this != &objs)
		grade = objs.getGrade();
	return (*this);
}

short Bureaucrat::getGrade()const{
	return(grade);
}

std::string Bureaucrat::getName() const{
	return (name);
}

void Bureaucrat::incrementGrade(){
	if (getGrade() - 1 <= 0)
		throw(GradeTooHighException());
	else
		--grade;
}

void Bureaucrat::decrementGrade(){
	if (getGrade() + 1 >= 150)
		throw(GradeTooLowException());
	else
		++grade;
}

void Bureaucrat::signForm(Form &objs) const{
	if (objs.checkIfSigned())
		std::cout << this->getName() << " signed " << objs.getName() << std::endl;
}

std::ostream &operator <<(std::ostream &op, Bureaucrat& objs){
	op << objs.getName() << " , bureaucrat grade " << objs.getGrade() << std::endl;
	return (op);
}
