#include <iostream>
#include <vector>
#include <exception>
#include "Span.hpp"

int main() {
    try {
        // Test 1: Basic Functionality
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Test 2: Adding more numbers than allowed
        try {
            sp.addNumber(20);
        } catch (std::exception &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test 3: Adding a large range of numbers
        Span largeSpan = Span(10000);
        std::vector<int> largeNumbers;
        for (int i = 0; i < 10000; ++i) {
            largeNumbers.push_back(i);
        }

        // Test 4: Edge case with no elements
        Span emptySpan = Span(5);
        try {
            emptySpan.shortestSpan();
        } catch (std::exception &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
        try {
            emptySpan.longestSpan();
        } catch (std::exception &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test 5: Edge case with only one element
        Span oneElementSpan = Span(5);
        oneElementSpan.addNumber(1);
        try {
            oneElementSpan.shortestSpan();
        } catch (std::exception &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
        try {
            oneElementSpan.longestSpan();
        } catch (std::exception &e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    return 0;
}
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}