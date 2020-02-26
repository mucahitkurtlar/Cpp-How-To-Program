#include <iostream>
#include "Account.h"

Account::Account(int initialValue){
	balance = 0;
	if(initialValue >= 0)
		balance = initialValue;
	else
		std::cout << "Initil value can't be negative!\n";
}

void Account::debit(int debitValue){
	if(balance >= debitValue)
		balance -= debitValue;
	else
		std::cout << "You have not enough money!\n";
}

void Account::credit(int creditValue){
	if(creditValue > 0)
		balance += creditValue;
	else
		std::cout << "creditValue can't be 0 or negative\n";
}
int Account::getBalance(){
	return balance;
}
