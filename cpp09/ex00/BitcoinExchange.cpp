#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(char *str) : file(str){
    std::cout << "BitcoinExchange with path constructed " << std::endl;
}

BitcoinExchange::~BitcoinExchange(){
    std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : file(other.getFile()){
    std::cout << "BitcoinExchange copy constructor called" << std::endl;

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    if (this != &other){
        *this  = other;
    }
    return (*this);
}

void BitcoinExchange::getData(){
    std::string input;
    std::ifstream dataScrap;
    dataScrap.open("data.csv");
    if (!dataScrap.is_open())
        throw("Couldn't open file ");
    std::getline(dataScrap, input);
    if (input.empty() || input != "date,exchange_rate")
        throw("Please enter a correct well formatted input.csv");
    while (std::getline(dataScrap, input))
        data[input.substr(0, input.find_last_of(','))] = atof((input.substr(input.find_last_of(',') + 1, input.size())).c_str());
    dataScrap.close();
    BitcoinExchange::applyRates();
}

void BitcoinExchange::applyRates(){
    std::string input;
    std::ifstream inputFile;
    inputFile.open(getFile());
    if (!inputFile.is_open())
        throw("Input file cannot be opened");
    getline(inputFile, input);
    if (input != "date | value")
        throw("Invalid date | value format ");
    while (getline(inputFile, input) && !input.empty()){
        try{
            std::string date = BitcoinExchange::inputDate(input);
            if (date == "Error")
                return ;
            // double value = BitcoinExchange::inputValue(input);
            // if (data.find(date) != data.end()){
            //     std::cout << date << " => " << value << " = " << value * data[date]  << std::endl;
            // }
            // else {
            //     std::cout << date <<  " => " << value << " = " << value * (data.lower_bound(date)->second) << std::endl;
            // }
        }
        catch(char const * &e){
            std::cout << e << std::endl;
        }

    }
}

std::string BitcoinExchange::inputDate(std::string &o){
    std::cout << o << std::endl;
    if (o[4] != '-' || o[7] != '-' || o[10] != ' '){
        std::cout << "Error: bad input => " << o << std::endl;
        return ("Error");
    }
    int year = atoi(o.substr(0, 4).c_str());
    std::cout << year << std::endl;
    // int month = atoi(o.substr())
    return ("test");
}

char *BitcoinExchange::getFile() const{
    return (file);
}