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
            try{
                std::string date = BitcoinExchange::inputDate(input);
                double value = BitcoinExchange::inputValue(input);
                // std::cout  << date << "----> " << value <<std::endl;
                if (data.find(date) != data.end()){
                    std::cout << date << " => " << value << " = " << value * data[date]  << std::endl;
                }
                else {
                    // std::cout << data.lower_bound(date)->first << std::endl;
                    if (data.lower_bound(date) != data.begin() && std::prev(data.lower_bound(date))->first < data.lower_bound(date)->first)
                        std::cout << date <<  " => " << value << " = " << value * (std::prev(data.lower_bound(date))->second) << std::endl;
                    else
                        std::cout << date <<  " => " << value << " = " << value * (data.lower_bound(date)->second) << std::endl;
                }
            }
            catch(char const * &e){
                std::cout << std::endl;
            }
        }
        catch(char const * &e){
            std::cout << e << std::endl;
        }

    }
}

double BitcoinExchange::inputValue(std::string &o){
    if (!isdigit(o[13]) && o[13] != '0'){
        std::cout << "Incorrect value ";
        throw("");
    }
    double value = std::atof(o.substr(13, o.size() - 13).c_str());
    if (value < 0 || value > 1000){
        std::cout << (value > 1000  ? "Error: too large a number." : "Error: too small a number.");
        throw("");
    }
    if (o.substr(13, o.size() - 13).find_first_of(' ') != std::string::npos){
        std::cout << "Error: Value has space";
        throw("");
    }
    return (value);
}

void BitcoinExchange::leapYearChecker(int &year, std::string &o){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // leap year formula
        return ;
    std::cout << "Error : " << o << " => Leap year month not respected !";
    throw("Error");
}

std::string BitcoinExchange::inputDate(std::string &o){
    // std::cout << o << std::endl;
    if (o[4] != '-' || o[7] != '-' || o.substr(10,3) != " | "){
        std::cout << "Error: bad input => " << o;
        throw("Error");
    }
    int year = 0;
    int month = 0;
    int day = 0;
    for (int i = 0 ; i < 4 ; i++){
        if (isdigit(o[i])){
            year = year * 10 + (o[i] - '0');
        }
        else{
            std::cout << o << " => Year invalid";
            throw("");
        }
    }
    for (int i = 5 ; i < 7; i ++){
        if (isdigit(o[i])){
           month = month * 10 + (o[i] - '0');
           }
       else{
           std::cout << o <<" => Month invalid";
           throw("");
       }
    }
    if (month < 1 || month > 12){
        std::cout << o<<" => Month invalid";
        throw("");
    }
    for (int i = 0 ; i < 2; i ++){
        if (isdigit(o[i])){
           day = day * 10 + (o[i] - '0');
           }
       else{
           std::cout << o <<" => Day invalid";
           throw("");
       }
    }
    if (day < 1 || day > 31){
        std::cout << o <<" => Day invalid";
        throw("");
    }
    if (month == 2){
        if (day > 29){
            std::cout << o <<" => February month has less than 29/28 days";
            throw("Error");
        }
        if (day == 29)
            BitcoinExchange::leapYearChecker(year, o);
    }
    // std::cout << "year is " << year << " , month is " << month << " , day is " << day << std::endl;
    return (o.substr(0, 10));
}
// add month checker

char *BitcoinExchange::getFile() const{
    return (file);
}