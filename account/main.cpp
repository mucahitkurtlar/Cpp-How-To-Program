#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	int credit, debit;
	Account myAccount(0);
	cout << "Enter credit value: ";
	cin >> credit;
	myAccount.credit(credit);
	cout << "Enter debit value: ";
	cin >> debit;
	myAccount.debit(debit);
	cout << myAccount.getBalance() << endl;
	return 0;
}
