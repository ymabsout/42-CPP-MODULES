#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class A;
class B;
class C;
Base::~Base(){
    std::cout << "Destructor called" << std::endl;
}
Base *generate(void){
    int choice = rand() % 3;
    if (choice == 1)
        return (new A());
    else if (choice == 2)
        return (new B());
    else
        return (new C());
}

void identify(Base* p){
    if (!p)
        return ;
    if (dynamic_cast<A *>(p))
        std::cout << "A type" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B type" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C type" << std::endl;
    else
        std::cout << "Not a valid pointer" << std::endl;
}

void identify(Base& p){
    try{
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Type A" << std::endl;
        return ;
    }
    catch(std::bad_cast &e){
        std::cout << "Bad type" << e.what() << std::endl;
    };
    try{
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Type B" << std::endl;
        return ;
    }
    catch(std::bad_cast &e){
        std::cout << "Bad type" << e.what() << std::endl;
    }
    try{
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Type C" << std::endl;
        return ;
    }
    catch(std::bad_cast &e){
        std::cout << "Bad type" << e.what() << std::endl;
    }

}