/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:01:28 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/04 18:15:39 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void){
    std::time_t kk = std::time(0);
    std::tm *ref = std::localtime(&kk);
    std::cout << "[" << ref->tm_year << ref->tm_mon << ref->tm_mday 
        << "_" << ref->tm_hour << ref->tm_min << ref->tm_sec << "] ";

}

Account::Account(int initial_deposit) {
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts++;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"<< std::endl;
}

