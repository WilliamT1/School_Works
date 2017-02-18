//William Todd
//CS 3304-05
//Question 3
//This program gets the current time

#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//Gets the total number of seconds since Jan 1, 1970 and converts them to seconds in present day
	int secondsNow = time(0);
	int convertSeconds = secondsNow%60;
	
	//Takes the total seconds passed in present day and converts them to minutes in the present day
	int minutesNow = secondsNow/60;
	int convertMinutes = minutesNow%60;
	
	//Takes the total seconds passed in the present day and converts it to hours passed in the present day (Not in military time)
	int hoursNow = secondsNow/3600;
	int convertHours = hoursNow%12;
	
	cout << "The time is " << convertHours << ":" << convertMinutes << ":" << convertSeconds << " GMT";
	return 0;
}
