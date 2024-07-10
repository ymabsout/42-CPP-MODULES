#include "Span.hpp"

// int main()
// {
//     try{
//         Span sp = Span(5);
//         try{
//             sp.addNumber(6);
//             sp.addNumber(3);
//             sp.addNumber(17);
//             sp.addNumber(9);
//             sp.addNumber(11);
//         }
//         catch(std::out_of_range &e){
//             std::cout << e.what() << std::endl;
//             return (1);
//         }
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(std::exception &e){
//         std::cout << e.what() << std::endl;
//     }
//     return (0);
// }


int main () {
    Span e(10);
    Span b (e);
    b.addNumber(1);
    b.addNumber(2);
    b.addNumber(3);
    b.addNumber(4);
    b.addNumber(5);
    b.addNumber(6);
    Span c = b;
    std::cout << c.longestSpan() << std::endl;
    std::cout << c.shortestSpan() << std::endl;
}