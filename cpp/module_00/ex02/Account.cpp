#include <iostream>
#include <ctime>
#include <chrono>
#include "Account.hpp"

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts() {

    return (Account::_nbAccounts);
}

int     Account::getTotalAmount() {

    return (Account::_totalAmount);
}

int     Account::getNbDeposits() {

    return (Account::_totalNbDeposits);
}

int     Account::getNbWithdrawals() {

    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos() {

    _displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposit:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {

    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account() {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void    Account::makeDeposit(int deposit) {

    _totalNbDeposits++;
    _totalAmount += deposit;
    _nbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    return true;
}

int     Account::checkAmount(void) const {

    return (this->_amount);
}

void    Account::displayStatus(void) const {

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp() {

    char    buf[64];

    std::time_t now = std::time(nullptr);
    strftime(buf, sizeof(buf), "[%Y%m%d_%I%M%S] ", std::localtime(&now));
    std::cout << buf;
}

Account::Account() {

    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}
