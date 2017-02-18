//William Todd
//CS 3304-05
//Question 4
//This program gets the total amount of clock cycles it takes to sum 100 million random numbers
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	int sum;
	
	//Gets the amount of clock cycles before the summation of the numbers
	clock_t start = clock();
	
	for(int i = 0; i < 100000000; i++)
		sum += rand();
		
	//Gets the amount of clock cycles passed after the summation of the numbers
	clock_t finish = clock();
	
	//Finds the total amount of cycles passed while the program executed
	float totalTime = finish-start;
	//Print statement
	printf("It took %.2lf clock ticks to compile 100000 numbers with a sum of: %d", totalTime, sum);
}
