#include <string>

//Bank account header file
//Sets up all functions and variables for the bank account class
class bankAccount
{
	double input;
	double balance;
	std::string newOwner;
	std::string owner;
public:
	void currentBal();
	void whoIsOwner();
	void deposit();
	void withdraw();
	void setOwner();
};