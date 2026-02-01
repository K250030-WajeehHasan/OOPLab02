#include<iostream>
using namespace std;

class BankAccount{
private: 
	float balance;
	
public: 
	void deposit(float amount);
	void withdraw(float amount);
	void showBalance();
};

void BankAccount::deposit(float amount){
	balance = balance + amount;
}
void BankAccount::withdraw(float amount){
	if(amount <= balance){
		balance = balance - amount;
	}
	else{
		cout<<"Insufficient balance.";
	}
}
void BankAccount::showBalance(){
	cout<<"The Amount in your bank account is "<<balance<<endl;
}

int main(){
	BankAccount b1;
	b1.deposit(1000);
	b1.withdraw(300);
	b1.showBalance();
	return 0;
}
