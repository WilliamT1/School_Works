//William Todd
//CS 3304-05
//9-13-16
//Question 12

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

//Declaring functions and variables that will be used later
bool totalZeroes(int a, int b, int c);
double *solvedZeroes(int a, int b, int c);
double evalExpression(int a, int b, int c, double x);
double imaginary, x1, x2, finalExpression, quadEval1, quadEval2, firstx, secondx;

using namespace std;

int main(int argc, char **argv)
{
//Initializes an array of type double which will eventually hold our root values for the quadratic expression
	double *zeroes;
	
//a, b, and c values for the first quadratic expression to be tested. Edit them if you'd like.
	int a1 = 1;
	int b1 = -2; 
	int c1 = -3;
	cout << "First quadratic tested: " << a1 << "x^2 + " << b1 << "x + " << c1 << endl;

//boolean that gets set to true or false depending on what is returned in the totalZeroes function
//if true then it tells the user there are imaginary roots in that quadratic expression
//else it will return the roots of the expression
	bool test1 = totalZeroes(a1, b1, c1);
	if(test1)
		cout << "This quadratic has imaginary roots." << endl;
	else
	{
		zeroes = solvedZeroes(a1, b1, c1);
		cout << "This quadratic has 2 roots" << endl;
		cout << "The zeroes for this quadratic are: x1 = " << zeroes[0] << ", x2 = " << zeroes[1] << endl;
	}

	cout << endl;

//a, b, and c values for the second quadratic expression to be tested. Edit them if you'd like.
	int a2 = 1;
	int b2 = 0;
	int c2 = 16;


	cout << "Second quadratic tested: " << a2 << "x^2 + " << b2 << "x + " << c2 << endl;

//boolean that gets set to true or false depending on what is returned in the totalZeroes function
//if true then it tells the user there are imaginary roots in that quadratic expression
//else it will return the roots of the expression
   	bool test2 = totalZeroes(a2, b2, c2);
	if(test2)
		cout << "This quadratic has 2 imaginary roots." << endl << endl;
	else
	{
		zeroes = solvedZeroes(a2, b2, c2);
		cout << "This quadratic has 2 roots" << endl;
		cout << "The zeroes for this quadratic are: x1 = " << zeroes[0] << " x2 = " << zeroes[1] << endl;
	}

//prompts the user to evaluate the first expression at any given x value
	cout << "What x would you like to evaulate the first quadratic expression at?: ";
	cin >> firstx;
	quadEval1 = evalExpression(a1, b1, c1, firstx);
	cout << "y = " << quadEval1 << endl;

//prompts the user to evaluate the second expression at any given x value
	cout << "What x would you like to evaulate the second quadratic expression at?: ";
	cin >> secondx;
	quadEval2 = evalExpression(a2, b2, c2, secondx);
	cout << "y = " << quadEval2 << endl;

    return 0;
}

//function that returns whether or not the two roots are imaginary
bool totalZeroes(int a, int b, int c)
{
    if (((b*b) - (4*a*c)) > 0)
        return false;
	else
		return true;
}

//finds the roots of the quadratic expression using the quadratic equation IF the expression has non-imaginary zeroes
//returns the pointer value for an array of the solved x values (because you can't directly return an array in c++)
double *solvedZeroes(int a, int b, int c)
{
	if(totalZeroes(a,b,c) == false)
	{
		x1 = (-b + sqrt((b*b) - (4*a*c)))/(2*a);
		x2 = (-b - sqrt((b*b) - (4*a*c)))/(2*a);
	}
	static double zeroes[2] = {x1, x2};
	return zeroes;
}

//evaluates the quadratic expression at a given x
double evalExpression(int a, int b, int c, double x)
{
	return ((a*(x*x)) + (b*x) + c);

}