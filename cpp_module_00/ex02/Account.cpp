#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

using std::cout;
using std::endl;

Account::Account(int inital_deposit)
{
	_nbDeposits = 
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = inital_deposit;
	_totalAmount += inital_deposit;
	_displayTimestamp();
	cout << "index:" << _nbAccounts++ << ";amount:" << inital_deposit << ";created" << endl;
}

int	Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	cout << "Accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals;" << _totalNbWithdrawals << endl;
}

void Account::_displayTimestamp() {
	std::time_t time_now = std::time(NULL); //

	tm time = *localtime(&time_now); //  
	cout << std::setfill('0') << "[" <<
		std::setw(2) << time.tm_year + 1900 <<
		std::setw(2) << time.tm_mon + 1 <<
		std::setw(2) << time.tm_mday << "-" <<
		std::setw(2) << time.tm_hour <<
		std::setw(2) << time.tm_min <<
		std::setw(2) << time.tm_sec << "]";
}

void Account::displayStatus() const {
	_displayTimestamp();
	cout << "index:" << _accountIndex << ":amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:"
		<< _nbWithdrawals << endl;
}

void Account::makeDeposit(int deposit) {
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit
		<< ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (withdrawal > checkAmount()) {
        cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal
         << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << endl;
    return true;
}

int Account::checkAmount() const {
	return _amount;
}

Account::~Account() {
	_displayTimestamp();
	cout << "index:" << _accountIndex << ":amount:" << _amount << ":closed" << endl;
}