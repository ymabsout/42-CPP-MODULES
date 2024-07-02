#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
	std::cout << "Bureaucraft default constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(short grade): name("NoName"), grade(grade){
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		std::cout << name << " construct called" << std::endl;
}

// const Bureaucrat::GradeTooHighException() char *what const _NOEXCEPT{

// }

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

short Bureaucrat::getGrade(){
	return(grade);
}

const std::string Bureaucrat::getName(){
	return (name);
}

void 