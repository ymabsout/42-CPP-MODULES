#include <iostream>
#include <map>
#include <fstream>
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

class BitcoinExchange{
    private:
        char *file;
        std::map < std::string , double > data;
    public:
        BitcoinExchange();
        BitcoinExchange(char *);
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        char *getFile() const;
        void getData();
        void applyRates();
        std::string inputDate(std::string &);
        double inputValue(std::string &);
};

#endif