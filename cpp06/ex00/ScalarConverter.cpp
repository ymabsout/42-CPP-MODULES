#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string& literal) {
    char *s;
    double value2 = strtod(literal.c_str(), &s);
    if (std::isnan(value2)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
        }
    else if (std::isinf(value2)){
        std::cout << "int: impossible" << std::endl;
        std::cout << "char: impossible" << std::endl;
        if (value2 > 0) {
            std::cout << "double: +inf" << std::endl;
            std::cout << "float: +inff" << std::endl;
        } else {
            std::cout << "double: -inf" << std::endl;
            std::cout << "float: -inf" << std::endl;
        }
        return ;
    }
    if (value2 && *s == '\0'){
        std::cout << "char: ";
        if ((value2 >= 32 && value2 <= 126))
            std::cout << static_cast<char>(value2)<< std::endl;
        else
            std::cout << "Impossible\n";
        std::cout << "int: ";
        if ((value2 <= std::numeric_limits<int>::max() && value2 >= std::numeric_limits<int>::min()))
            std::cout << static_cast<int>(value2);
        else
            std::cout << "Impossible    ";
        std::cout << std::endl;
        std::cout << "float: " <<  value2 << "f" <<std::endl;
        std::cout << "double: " << value2 << std::endl;
        return ;
    }
    s = nullptr;
    if (literal.length() == 1 && isprint(literal[0]) && isalpha(literal[0])){
        std::cout << "char: " << literal[0] << std::endl;
        std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast <double> (literal[0]) <<std::endl;
        return ;
    }
    s = nullptr;
    long value = strtol(literal.c_str(), &s, 10);
    if(value && *s == '\0'){
        std::cout << "char: ";
        if ((value>=32 && value <=126))
            std::cout <<  static_cast<char>(value);
        else
            std::cout << "Impossible";
        std::cout << std::endl << "int: ";
        if ((value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min()))
            std::cout << static_cast<int> (value);
        else
            std::cout << "Impossible";
        std::cout << std::endl;
        std::cout << "float: " <<  static_cast<float>(value) << ".0f" <<std::endl;
        std::cout << "double: " <<  static_cast<double>(value) << ".0" << std::endl;
        return ;
    }
    s = nullptr;
    float value1 = strtof(literal.c_str(), &s);
    if (value1 && *s == 'f'){
        std::cout << "char: ";
        if ((value1>=32 && value1 <=126))
            std::cout <<  static_cast<char>(value1)<< std::endl;
        else
            std::cout << "Impossible\n";
        std::cout << "int: ";
        if ((value1 <= std::numeric_limits<int>::max() && value1 >= std::numeric_limits<int>::min()))
            std::cout << static_cast<int>(value1);
        else
            std::cout << "Impossible";
        std::cout << std::endl;
        std::cout << "float: " <<  value1 << "f" <<std::endl;
        std::cout << "double: " << value1 << std::endl;
        return ;
    }
    std::cout <<"char : impossible"<< std::endl;
    std::cout <<"int : impossible"<< std::endl;
    std::cout <<"float : nanf"<< std::endl;
    std::cout <<"double : nan"<< std::endl;
}