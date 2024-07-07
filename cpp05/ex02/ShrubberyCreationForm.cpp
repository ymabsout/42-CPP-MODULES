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
    (void)objs;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor ) const {
    if (checkIfSigned() && executor.getGrade() <= getGradeToExecute()){
        std::ofstream out;
        out.open(this->getName() + "_shrubbery");
        out << "            .        +          .      .          .\n"
                "     .            _        .                    .\n"
                "  ,              /;-._,-.____        ,-----.__\n"
                " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
                "  `                 \\   _|`'=:_::.`.);  \\ __/ /\n"
                "                      ,    `./  \\:. `.   )==-'  .\n"
                "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
                ".           \\:/`-' , ,\\ '` ` `   ): , /_  -o\n"
                "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
                "  .      ,=':  \\    ` `/` ' , , ,:' `'--'.--'---._/`7\n"
                "   `.   (    \\: \\,-._` ` + '\\, ,'   _,--._,---':.__/\n"
                "              \\:  `  X` _| _,\\/\'   .-'\n"
                ".               ':._:`\\____  /:'  /      .           .\n"
                "                    \\::.  :\\/:'  /              +\n"
                "   .                 `.:.  /:'  }      .\n"
                "           .           ):_(:;   \\           .\n"
                "                      /:. _/ ,  |\n"
                "                   . (|::.     ,`                  .\n"
                "     .                |::.    {\\\n"
                "                      |::.\\  \\ `.\n"
                "                      |:::(\\    |\n"
                "              O       |:::/{ }  |                  (o\n"
                "               )  ___/#\\::`/ (O '==._____   O, (O  /`\n"
                "          ~~~w/w~'~~,\\` `:/,-(~`'~~~~~~~~'~o~\\~/~w|/~/\n"
                "         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \"\n";
            out.close();
    }
    else 
        throw(FormNotSigned());
}