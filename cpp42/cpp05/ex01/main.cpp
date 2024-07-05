#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("bolisi", 100);
        std::cout << "Bureaucrat b1 created successfully." << std::endl;
        try {
            Bureaucrat b2("benay",200); // Throws std::exception (invalid grade)
            std::cout << "This line should not be printed." << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        Form formula("ostora", 1, 130);
        std::cout << "Form formula created successfully." << std::endl;
        std::cout << formula << std::endl;

        try {
            Form invalidForm("invalid", 0, 200); // Throws std::exception (invalid parameters)
            std::cout << "This line should not be printed." << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

        Bureaucrat B2("mo7ami", 50);
        try{
            formula.beSigned(B2);
            std::cout << "Form signed successfully." << std::endl;
            std::cout << formula << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }

        try {
            Bureaucrat B3("benay",150); 
            formula.beSigned(B3); // Throws std::exception (insufficient grade)
            std::cout << "This line should not be printed." << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
    }
    catch (std::exception &e) {
        std::cerr << "Unhandled exception: " << e.what() << std::endl;
    }

    return (0);
}