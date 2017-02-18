#include <bankAccount.h>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//Deposit function
//Pre-condition: None
//Post-condition: Deposits into the account
void bankAccount::deposit(){
	cout << "How much would you like to deposit? ";
	cin >> input;
	bankAccount::balance += input;
}

//Pre-condition: None
//Post-condition: Withdraws from the account
void bankAccount::withdraw(){
	cout << "How much would you like to withdraw? ";
	cin >> input;
	if(input > bankAccount::balance)
		cout << "You are withdrawing more than you have. You cannot overdraft!" << endl;
	else
		bankAccount::balance -= input;
}

//Pre-condition: None
//Post-condition: Displays the current balance of the account
void bankAccount::currentBal(){
	cout << "The current balance is: " << bankAccount::balance << endl;
}

//Pre-condition: None
//Post-condition: Sets the new owner of the account
void bankAccount::setOwner(){
	cout << "Who is the new owner? ";
	cin >> newOwner;
	bankAccount::owner = newOwner;
}

//Pre-condition: None
//Post-condition: Displays the current owner of the account
void bankAccount::whoIsOwner(){
	cout << "The current owner is: " << bankAccount::owner << endl;
}