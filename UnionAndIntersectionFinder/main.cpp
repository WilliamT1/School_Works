//William Todd
//9-17-16
//CS3304-05
//Question 13
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;
//Initializes findUnion and findIntersection functions
void findUnion(int mySet1[], int mySet2[], int set1Size, int set2Size);
void findIntersection(int mySet1[], int mySet2[], int set1Size, int set2Size);

//Main with test class in it
int main(int argc, char **argv)
{
//Random sets of numbers to be test. Feel free to change. Remember that a set never has repeating numbers within it.
	int mySet1[] = {1, 4, 6, 7, 8};
	int mySet2[] = {1, 2, 3, 4, 5, 7, 22};

//Gets the size of the array by dividing the total number of bytes the array takes up by the number of bytes one index takes up
	const int set1Size = (sizeof(mySet1)/sizeof(mySet1[0]));
	const int set2Size = (sizeof(mySet2)/sizeof(mySet2[0]));

//Calls the functions that will find our union and intersection of the two sets. Have trouble with these, explained in the report.
	findIntersection(mySet1, mySet2, set1Size, set2Size);
	findUnion(mySet1, mySet2, set1Size, set2Size);
	
	return 0;

}

//Function that finds the intersection. Takes both sets of data and their sizes, prints out the interesection.
void findIntersection(int mySet1[], int mySet2[], int set1Size, int set2Size){
	int i, j=0;
	cout << "Intersection of the two sets: ";

//Prints out the number contained at an index in mySet1 when both mySet1 and mySet2 contain the same value
//If they do not contain a value, but the first set contains a larger number then it increments the index of the other set and vice versa
//Works even with an unordered set.
	while(i < set1Size && j < set2Size){
		if(mySet1[i] == mySet2[j]){
			cout << mySet1[i] << " ";
			i++;
			j++;
		}
		else if(mySet1[i] > mySet2[j])
			j++;
		else
			i++;
	}
	cout << endl;
}

//Almost the opposite of the intersection function. If an index in one set is not equal to the index of another it prints the object at that index, then increments the index for the array it just pulled the object from.
//If an object in one index is equal to an object at another index in a seperate set then it prints the object from one of the sets and increments both indices.
void findUnion(int mySet1[], int mySet2[], int set1Size, int set2Size){
		int i, j=0;
	cout << "Union of the two sets: ";
	while(i < set1Size && j < set2Size){
		if(mySet1[i] < mySet2[j]){
			cout << mySet1[i] << " ";
			i++;
		}
		else if(mySet1[i] > mySet2[j]){
			cout << mySet2[j] << " ";
			j++;
		}
		else{
			cout << mySet2[j] << " ";
			i++;
			j++;
		}
	}
	//Once you run out of items to compare, if one set is longer than the other it will print the rest of the items in that set, thus completing the union.
		while(i < set1Size){
			cout << mySet1[i] << " ";
			i++;
		}
		while(j < set2Size){
			cout << mySet2[j] << " ";
			j++;
		}
	cout << endl;
}