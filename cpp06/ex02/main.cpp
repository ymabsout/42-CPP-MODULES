#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main () {
    Base * typeA = new A();
    Base * typeB = new B();
    Base * typeC = new C();
    Base& s = *typeA;
    identify(s);
    identify(typeC);
    identify(typeB);
    identify(typeA);
    delete typeA;
    delete typeB;
    delete typeC;
}