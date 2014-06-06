///////////////////////
//Morgan Sherve
//Assignment 4 Exercise 11.9
//////////////////////////


#include <iostream>
using namespace std;

class Rectangle2D
{	
public: 
	double x, y;

	double getX();
	double getY();

	void  setX();
	void setY();

	double width, height;

	double getWidth();
	double getHeight();

	void setWidth();
	void setHeight();

	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}

	Rectangle2D (double x, double y, double width, double height);

	double getArea(double Area)
	{
		Area = width*height;
		return Area;
	}

	double getPerimeter (double Perimeter)
	{
		Perimeter = 2*(width + height);
		return Perimeter;
	}
	bool contains (double x, double y)
	{
		bool PtInside;
		if ( x < width && y < height)
		{ PtInside = true;}
		else
		{PtInside = false;}
		return PtInside;
	}

	bool contains (const Rectangle2D &r)
	{
		bool RecInside;
		if (r.getWidth < width && r.getHeight < height)
		{ RecInside = true;}
		else
		{RecInside = false;}
		return RecInside;
	}

	bool overlaps (const Rectangle2D &r)
	{
		bool overlap;
		if (r.getX = x ||r.getY = y)
		{overlap = true;}
		else 
		{overlap = false;}
		return overlap;

	}

};


int main()
{

	double getArea();
	double getPerimeter();
	Rectangle2D r1 (2, 2, 5.5, 4.9), r2 (4, 5, 10.5, 3.2), r3 (3, 5, 2.3, 5.4);

	cout << "The area of rectangle one is: " << r1.getArea() << endl;
	cout << "The perimeter is: " << getPerimeter() << endl;
	cout << r1.contains(3,3) << endl;
	cout << r1.contains (r2) << endl;
	cout << r1.overlaps(r3) << endl;

	return 0;
}
