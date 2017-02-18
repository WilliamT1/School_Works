//William Todd
//CS3304-05
//9-28-16
//Question 22
#include <stdio.h>
#include <iostream>

using namespace std;

//Creates Template T 
//Precondition: Any two values that can use the > comparator are fed into the function
//Postcondition: Will return the larger value
template<typename T>
T maxValue(T const& value1,T const& value2){
	if (value1 > value2)
		return value1;
	else
		return value2;
}

//Main class that compares
int main(int argc, char **argv)
{
	int a = 1;
	int b = 2;
	
	char c = 'a';
	char d = 'b';
	
	double x = 1.1;
	double y = 1.2;
	
	cout << "The max int is " << maxValue(a,b) << endl << "The max char is " << maxValue(c, d) << endl << "The max double is " << maxValue(x,y);
	return 0;
}

