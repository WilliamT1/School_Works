//William Todd
//CS 3304-05
//9-17-2016
//Question 11
#include <stdio.h>
#include <bankAccount.h>
#include <iostream>

using namespace std;
//Establishes our menu function which will be used to give the user a ui to interact with the bank account
void menu();

int main(int argc, char **argv)
{
	menu();
	return 0;
}

//Menu function that allows the user to interact with the bank account
//Precondition: None
//Post condition: Will print out a text-based ui to let the user interact with the account
void menu()
{
	//Creates object of type bankAccount named 'ourAccount'
	bankAccount ourAccount;
	char input;
	//As long as the user does not choose to quit they can interact with the bank account. If they choose one of the options it will call the function for the object ourAccount based on the option chosen.
	//Functions explained in bankAccount.cpp
	while(input != 'q'){
		cout << "Enter d for deposit, w for withdraw, c to check the current balance, s to set the owner, f to find the owner, or q to quit: ";
		cin >> input;
		switch(input){
			case 'd':
				ourAccount.deposit();
				break;
			case 'w':
				ourAccount.withdraw();
				break;
			case 'c':
				ourAccount.currentBal();
				break;
			case 's':
				ourAccount.setOwner();
				break;
			case 'f':
				ourAccount.whoIsOwner();
				break;
		}
	}
	//Printed once the user decides they are done banking.
	cout << "Thanks for banking! Please come again.";
}