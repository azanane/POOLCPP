/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azanane <azanane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:29:51 by anaszanane        #+#    #+#             */
/*   Updated: 2022/08/24 10:12:05 by azanane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;




Account::Account(void) {

	return ;
};

Account::~Account(void) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ";closed\n";

	return ;
};

Account::Account(int initial_deposite) {

	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();

	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	std::cout << "index:" << this->_accountIndex << ';';

	this->_amount = initial_deposite;
	std::cout << "amount:" << this->_amount << ";created\n";
	_totalAmount += this->_amount;

	return ;
};


int	Account::getNbAccounts( void ) {

	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {

	return _totalAmount;
}
	
int	Account::getNbDeposits( void ) {

	return _totalNbDeposits;
}
	
int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}
	
void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	
	std::cout << "deposit:" << deposit << ';';
	if (deposit > 0)
	{
		_totalNbDeposits += 1;
		_nbDeposits += 1;
	}
	_totalAmount += deposit;
	
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits << '\n';
	
	return ;
} 

int		Account::checkAmount( void ) const {

	return this->_amount;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';

	std::cout << "withdrawal:";
	if (checkAmount() - withdrawal < 0) {
		
		std::cout << "refused\n";
		return false;
	}
	std::cout << withdrawal << ";";
	_totalAmount -= withdrawal;

	this->_amount -= withdrawal;
	std::cout << "amount:" << this->_amount << ';';
	
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals += 1;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << '\n';

	return true;
}


void	Account::displayStatus( void ) const {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << '\n';
	
	return ;
}

void	Account::_displayTimestamp( void ) {

	std::time_t current_time = std::time(0);
	std::tm *time_info = std::localtime(&current_time);

	std::cout << '['  << (time_info->tm_year + 1900) << (time_info->tm_mon + 1)
	<< time_info->tm_mday << '_' << time_info->tm_hour << time_info->tm_min << time_info ->tm_sec << "] ";

	return ;
}
