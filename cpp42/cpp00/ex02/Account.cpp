/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:01:28 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/05 16:15:33 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void){
    std::time_t kk = std::time(0);
    std::tm *ref = std::localtime(&kk);
    std::cout << "[" << 1900+ref->tm_year << std::setw(2) <<  std::setfill('0') 
        << ref->tm_mon << std::setw(2) <<  std::setfill('0')<< ref->tm_mday 
        << "_" << std::setw(2) <<  std::setfill('0')
        << ref->tm_hour << std::setw(2) <<  std::setfill('0')
        << ref->tm_min << std::setw(2) <<  std::setfill('0')
        << ref->tm_sec << "] ";

}

Account::Account(int initial_deposit) {
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"<< std::endl;
}

void Account::makeDeposit(int deposit){
    Account::_displayTimestamp();
    this->_nbDeposits += 1;
    std::cout << "index:" << _accountIndex 
    << ";p_amount:" << _amount  << ";deposit:" << deposit
    << ";amount:" << deposit + _amount
    << ";nb_deposits:" << _nbDeposits
    << std::endl;
    this->_amount += deposit;
    _totalAmount +=deposit;
    _totalNbDeposits += _nbDeposits;
}

bool Account::makeWithdrawal(int withdrawal){
    Account::_displayTimestamp();
    if (_amount < withdrawal){
        std::cout << "index:" << _accountIndex
        << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _nbWithdrawals += 1;
    std::cout << "index:" << _accountIndex 
    << ";p_amount:" << _amount 
    << ";withdrawal:" << withdrawal
    << ";amount:" << _amount - withdrawal
    << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    return(true);
}

int Account::checkAmount(void)const{
    return(this->_totalAmount);
}

void Account::displayStatus(void)const{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex 
        << ";amount:" << _amount 
        << ";deposits:" << _nbDeposits 
        << ";withdrawals:" << _nbWithdrawals <<std::endl;
}

Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";closed" << std::endl;
    _nbAccounts--;
}

int Account::getNbAccounts(void){
    return (_nbAccounts);
}

int Account::getNbDeposits(void){
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

int Account::getTotalAmount(void){
    return(_totalAmount);
}

void Account::displayAccountsInfos(void){
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts()
    << ";total:" << _totalAmount
    << ";deposits:" << _totalNbDeposits 
    << ";withdrawals:" << _totalNbWithdrawals
    <<std::endl;
}