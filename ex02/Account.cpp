#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
	++_totalNbDeposits;
	++_nbDeposits;
	_amount += deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << _amount 
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:" << "refused\n";
		return false;
	}
	else
	{
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount + withdrawal
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawal:" << _nbWithdrawals << std::endl;
		return true;
	}
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits 
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
	struct std::tm *now = std::localtime(&t);
	int year = now->tm_year + 1900;
	int month = now->tm_mon + 1;
	int	day = now->tm_mday;
	int hour = now->tm_hour;
	int minute = now->tm_min;
	int second = now->tm_sec;
	std::cout << "[" << year << month << day << "_" << hour << minute << second << "] ";
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	++_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	++_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	--_nbAccounts;
}
