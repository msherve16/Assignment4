/////////////////////////////
//Morgan Sherve
//Assignment 4 Exercise 11.5
//////////////////////////////////

#include <iostream>
using namespace std;


int minimum (int element[], int size)
{
	int smallest= element[0];
	for (int i=1; i<size; i++)
	{
		if (smallest > element [i])
			smallest = element [i];
	}
	return smallest;
}

int main()

{	int minimum();
	const int ISIZE = 8;
	int element [ISIZE] = {1, 2, 4, 5, 10, 100, 2, -22};
	int smallest = element [0];
	for (int i=1; i < ISIZE; i++)
	{
		if (element[i] < smallest)
			smallest = element[i];
	}
	cout << "Lowest score is " << smallest << endl;

	return 0;
}