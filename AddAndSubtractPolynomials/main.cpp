//William Todd
//CS3304-05
//9-17-16
//Question 14
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>

using namespace std;

//Establishes the functions which will be used to add and subtract later
void addPolys(int poly1[], int poly2[], int poly1Size, int poly2Size), subtractPolys(int poly1[], int poly2[], int poly1Size, int poly2Size);


//Main which will be used to test our functions
int main(int argc, char **argv)
{
	//Polynomials which will be added/subtracted. Feel free to change values/length
	int poly1[] = {1, 3, 2, 9, 2, 123, 9842, 12};
	int poly2[] = {2, 0, 8, 8, 7};
	
	//Gets the size of our polynomials which will then be passed to the functions. Need this to know how many variables our polynomial has
	int poly1Size = (sizeof(poly1)/sizeof(poly1[0]));
	int poly2Size = (sizeof(poly2)/sizeof(poly2[0]));
	
	//Calls the functions to add and subtract our polynomials
	cout << "Polys added = " ;
	addPolys(poly1, poly2, poly1Size, poly2Size);
	cout << endl;
	cout << "Polys subtracted = ";
	subtractPolys(poly1, poly2, poly1Size, poly2Size);

	return 0;
}

//Function to add polynomials
//Precondition: Must have two valid polynomials (They are valid as long as they are not null), and have the size of them
//Postcondition: Will add both polynomials and print the resulting coeficients along with the variables. Will not print a variable alongside the constant as the constant doesn't get a variable
void addPolys(int poly1[], int poly2[], int poly1Size, int poly2Size)
{
//This will be used to print the x raised to some power. Subtracts 1 from the size of the polynomial as the constant is not assigned a variable
	int totalVariables1 = poly1Size-1;
	int totalVariables2 = poly2Size-1;
	
	//Algorithm that adds the polynomials. If one poly is larger than the other it will add to the larger poly to make it easier to evaluate
	int i = 0;
	if(poly1Size >= poly2Size){
		while(i < poly2Size){
			poly1[i] += poly2[i];
			i++;
		}
		//For loop to print out the polynomial. Once the polynomial gets to the last constant it will not print out the x alongside the number as the last number is the constant.
		for(int i = 0; i < poly1Size; i++){
			if(i < poly1Size-1)
				cout << poly1[i] << "x^" << totalVariables1-- << " + ";
			else 
				cout << poly1[i];
		}
	}
	else{
		while(i < poly1Size){
			poly2[i] += poly1[i];
			i++;
		}
		//Same as above. For loop to print out the polynomial. Once the polynomial gets to the last constant it will not print out the x alongside the number as the last number is the constant.
		for(int i = 0; i < poly2Size; i++){
			if(i < poly2Size-1)
				cout << poly2[i] << "x^" << totalVariables2-- << " + ";
			else 
				cout << poly2[i];
		}
	}
	

}

//Function to subtract polynomials
//Precondition: Must have two valid polynomials (They are valid as long as they are not null), and have the size of them
//Postcondition: Will subtract both polynomials and print the resulting coefficients along with the variables. Will not print a variable alongside the constant as the constant doesn't get a variable
void subtractPolys(int poly1[], int poly2[], int poly1Size, int poly2Size)
{
//This will be used to print the x raised to some power. Subtracts 1 from the size of the polynomial as the constant is not assigned a variable
	int totalVariables1 = poly1Size-1;
	int totalVariables2 = poly2Size-1;
	
	int i = 0;
	//Algorithm that subtractss the polynomials. If one poly is larger than the other it will subtract from the larger poly to make it easier to evaluate
	if(poly1Size >= poly2Size){
		while(i < poly2Size){
			poly1[i] -= poly2[i];
			i++;
		}
		//For loop to print out the polynomial. Once the polynomial gets to the last constant it will not print out the x alongside the number as the last number is the constant.
		for(int i = 0; i < poly1Size; i++){
			if(i < poly1Size-1)
				cout << poly1[i] << "x^" << totalVariables1-- << " + ";
			else 
				cout << poly1[i];
		}
	}
	else{
		while(i < poly1Size){
			poly2[i] -= poly1[i];
			i++;
		}
		//Same as above. For loop to print out the polynomial. Once the polynomial gets to the last constant it will not print out the x alongside the number as the last number is the constant.
		for(int i = 0; i < poly2Size; i++){
			if(i < poly2Size-1)
				cout << poly2[i] << "x^" << totalVariables2-- << " + ";
			else 
				cout << poly2[i];
		}
	}
	

}