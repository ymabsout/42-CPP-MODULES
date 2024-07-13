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
        std::string date = BitcoinExchange::inputDate(input);
        double value = BitcoinExchange::inputValue(input);
        if (data.find(date) != data.end()){
            std::cout << date << " => " << value << " = " << value * data[date]  << std::endl;
        }
        else {
            std::cout << date <<  " => " << value << " = " << value * (data.lower_bound(date)->second) << std::endl;
        }
    }
}

std::string BitcoinExchange::inputDate(std::string &o){
    
}

char *BitcoinExchange::getFile() const{
    return (file);
}