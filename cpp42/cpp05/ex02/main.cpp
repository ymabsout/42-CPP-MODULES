#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try{
        Bureaucrat b1(1);
        ShrubberyCreationForm okk("target mli7");
        okk.execute(b1);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}