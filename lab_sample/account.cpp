#include <iostream>

using namespace std;

class Account {
	public:
		Account(int b){
			if(b >= 0)
				balance = b;
			else {
				balance = 0;
				cout << "Hata!!!\n";
			}
		}
		
		void credit(int c){
			balance += c;
		}
		
		void debit(int d){
			if(d <= balance)
				balance -= d;
			else{
				cout << "Hata2!!!\n";
			}
		}
		
		int getBalance(){
			return balance;
		}
	
	private:
		int balance;
};

int main(){
	Account myAccount(15);
	cout << myAccount.getBalance() << endl;
	myAccount.debit(5);
	cout << myAccount.getBalance() << endl;
	myAccount.credit(10);
	cout << myAccount.getBalance() << endl;
	myAccount.debit(3);
	cout << myAccount.getBalance() << endl;
	return 0;
}