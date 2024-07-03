#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137){
    std::cout << "Shrubbery constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(target, 145, 137){
    std::cout << target <<" constructor called " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Shrubbery destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& objs) : AForm(objs.getName(), objs.getGradeToSign(), objs.getGradeToExecute()){    
    std::cout << "Shrubbery copy constructor called " << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm& objs){
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor ) const {
    if (checkIfSigned() && executor.getGrade() <= getGradeToExecute()){
        // std::ofstream ofile(this->getName() + "_shrubbery",)
        std::ofstream out;
        out.open(this->getName() + "_shrubbery");
        out << R"(
            .        +          .      .          .
     .            _        .                    .
  ,              /;-._,-.____        ,-----.__
 ((        .    (_:#::_.:::. `-._   /:, /-._, `._,
  `                 \   _|`'=:_::.`.);  \ __/ /
                      ,    `./  \:. `.   )==-'  .
    .      ., ,-=-.  ,\, +#./`   \:.  / /           .
.           \/:/`-' , ,\ '` ` `   ): , /_  -o
       .    /:+- - + +- : :- + + -:'  /(o-) \)     .
  .      ,=':  \    ` `/` ' , , ,:' `'--'.--'---._/`7
   `.   (    \: \,-._` ` + '\, ,'   _,--._,---':.__/
              \:  `  X` _| _,\/'   .-'
.               ':._:`\____  /:'  /      .           .
                    \::.  :\/:'  /              +
   .                 `.:.  /:'  }      .
           .           ):_(:;   \           .
                      /:. _/ ,  |
                   . (|::.     ,`                  .
     .                |::.    {\
                      |::.\  \ `.
                      |:::(\    |
              O       |:::/{ }  |                  (o
               )  ___/#\::`/ (O '==._____   O, (O  /`
          ~~~w/w~'~~,\` `:/,-(~`'~~~~~~~~'~o~\~/~w|/~
         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ "
    )" << std::endl;
    out.close();
    }
    else
        throw(FormNotSigned());
}