#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// Gaurab Sapkota

struct rectangle
{
    float length;
    float width;
    float area;
    float perimeter;
};


// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats

int main()
{
	rectangle box ;

	cout << "Enter the length of a rectangle: ";

	cin>>box.length;

	cout << "Enter the width of a rectangle: ";

	cin>>box.width;

	cout << endl << endl;

	box.area = box.length *box.width;
    box.perimeter = box.length*2 +box.width *2;

	cout << fixed << showpoint << setprecision(2);

	cout<< "Area of the box is "<< box.area <<endl;
    cout<< "Perimeter of the box is "<< box.perimeter <<endl;


	// Fill in code to output the perimeter with an appropriate message

	return 0;
}