//William Todd
//CS3304-05
//9-28-16
//Question 24B
#include <iostream>
#include <vector>
using namespace std;

const int COLUMN_SIZE = 4;

int sum(const int a[][COLUMN_SIZE], int rowSize)
{
	int total = 0;
	for (int row = 0; row < rowSize; row++){
		for (int column = 0; column < COLUMN_SIZE; column++){
			total += a[row][column];
		}
	}
return total;
}

//Overloaded sum class that will take vectors instead of arrays
//Precondition: Valid 2d vector is input
//Post-condition: Will sum up all elements within the 2d vector
int sum(const vector< vector<int> >a, int rowSize)
{
	int total = 0;
	for (int row = 0; row < rowSize; row++){
		for (int column = 0; column < COLUMN_SIZE; column++){
			total += a[row][column];
		}
	}
return total;
}

int main()
{
	//DONE WITH ARRAYS
	const int ROW_SIZE = 3;
	int m[ROW_SIZE][COLUMN_SIZE];
	cout << "Enter " << ROW_SIZE << " rows and " << COLUMN_SIZE << " columns: " << endl;

	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < COLUMN_SIZE; j++)
			cin >> m [i][j];

	cout << "\nSum of all elements is " << sum(m, ROW_SIZE) << endl;

	//DONE WITH VECTORS
	vector< vector<int> > n;
	n.resize(ROW_SIZE, vector<int>(COLUMN_SIZE));
	
	cout << "Enter " << ROW_SIZE << " rows and " << COLUMN_SIZE << " columns: " << endl;

	for (int i = 0; i < ROW_SIZE; i++)
		for (int j = 0; j < COLUMN_SIZE; j++)
			cin >> n [i][j];

	cout << "\nSum of all elements is " << sum(n, ROW_SIZE) << endl;
	return 0;
}
