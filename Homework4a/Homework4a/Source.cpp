////////////////////////////
// Morgan Sherve
//June 5, 2014
//Homework 4 Exercise 11.1
/////////////////////////////

#include <iostream>
using namespace std;


int main()
{
	int *x;
	double sum= 0;
	double average;
	int aboveAverage = 0;
	int ISIZE;

	cout << "How many numbers would you like to enter: " << endl;
	cin >> ISIZE;
	
	x = new int [ISIZE];
	
	for (int i =0; i < ISIZE; i++)
	{
		cout << "Please enter a value:" << endl;
		cin >> *x;
		sum += x[i];
		average = sum/ ISIZE;
	}
		if (*x > average)
			{
				aboveAverage++;
			}
		cout << "Numbers bigger than average: " << aboveAverage << endl;

			delete [] x;
		

}
