////////////////////////
//Morgan Sherve
//Assignment 4 Exercise 11.13
///////////////////////////////

#include <iostream>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this -> courseName = coursename;
	this-> capacity = capacity;
	students = new string[capacity];
}

 Course::~Course()
 {
	 delete [] students;
 }
  string Course:: getCourseName() const
  {
	  return courseName;
  }

  void Course::addStudent (const string& name)
  {
	  numberOfStudents++;
  }

 //Homework:
  int dropStudent (const string& name)
  {
	  numberOfStudents--;
  }

  int clear()
  {
	  students == 0;
  }

string* Course::getStudents const 
  {
	  return students;
  }

//Homework:

int* doubleCapacity (const int* list, int size)
{
	int newSize;
	newSize = (2*size);
	list = new int [newSize];
}

int main()
{
	

	int addStudent ("Emily"), ("George"), ("Kayli");
	int dropStudent ("Fred");
	cout << "Total students in course: " << numberOfStudents << endl;

	return 0;
}
