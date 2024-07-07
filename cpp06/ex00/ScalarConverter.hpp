#include <iostream>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cmath>
#ifndef SCALARCONVERTED_HPP
#define SCALARCONVERTED_HPP

class ScalarConverter {
    private:
        ScalarConverter();
    public:
        static void convert(std::string &objs);
};

#endif