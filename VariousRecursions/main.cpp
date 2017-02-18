#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
int recursiveFactorial(int n);
int sumFactorial(int n);
int fibonacciSeq(int n);
void recursivePrint(string n, int printTimes);
bool palindrome(const string& n);


int main(int argc, char **argv)
{
	cout << recursiveFactorial(8) << endl;
	
	clock_t t1 = clock();
    cout << sumFactorial(10000) << endl;
	clock_t t2 = clock();
	cout << (float)(t2-t1)/ CLOCKS_PER_SEC << " seconds" << endl;
	
    cout << fibonacciSeq(8) << endl;
    recursivePrint("hello", 8);
    cout << palindrome("81918");
}

//pre: a non-negative integer is input
//postcondition: finds the factorial for n recursively
int recursiveFactorial(int n){
    if(n>1)
        n = n*recursiveFactorial(n-1);
    return n;
}

//pre: a non-negative integer is input
//postcondition: finds the sum of all numbers added up to n recursively
int sumFactorial(int n){
    if(n>0)
        n+=sumFactorial(n-1);
    return n;
}


//pre: a non-negative integer is input
//postcondition: finds the fibonacci sequence up to the nth number recursively
int fibonacciSeq(int n){
    if(n>1)
        n = fibonacciSeq(n-1)+fibonacciSeq(n-2);
    return n;
}

//precondition: a string and the number of times the user would like to print it is input
//postcondition: prints out the string x times using recursion
void recursivePrint(string n, int printTimes){
    if(printTimes>0){
        cout << n << endl;
        recursivePrint(n, printTimes-1);
    }
}

//precondition: a string is input
//postcondition: prints a 1 if the string is a palindrome and a 0 if it is not
bool palindrome(const string& n){
	if(n.size()<=1)
		return true;
	else if(n.at(0)==n.at(n.size()-1))
		return palindrome(n.substr(1, n.size()-2));
	else
		return false;
}