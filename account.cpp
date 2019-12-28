#include<iostream>
#include<cstring>
using namespace std;

class Account
{
	int accno;
	char name[20];
	int balance;
public:
	Account();
	Account(int, char*, int);
	void deposite(int);
	void withdraw(int);
	void showBalance();
};

Account::Account()
{
	accno=1001;
	strcpy(name,"abc");
	balance=50000;
}

Account::Account(int no, char *n, int bal)
{
	accno=no;
	strcpy(name,n);
	balance=bal;
}

void Account::deposite(int amount)
{
	balance=balance+amount;
}

void Account::withdraw(int amount)
{
	balance=balance-amount;
}

void Account::showBalance()
{
	cout<<"available balance "<<balance<<endl;
}
int main()
{
	Account a1;
	Account a2(12,"jack",70000);
	a1.deposite(4000);
	a1.showBalance();
	return 0;
}





