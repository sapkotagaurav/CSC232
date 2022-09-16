#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// Gaurab Sapkota

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
    float length;
    float width;
};


// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable

struct rectangle
{
    float perimeter;
    float area;
    dimensions sizes;


};


int main()
{
	// Fill in code to define a rectangle structure variable named box.
    rectangle box;

	cout << "Enter the length of a rectangle: ";
    cin>> box.sizes.length;

	// Fill in code to read in the length to the appropriate location

	cout << "Enter the width of a rectangle: ";
    cin>> box.sizes.width;

	// Fill in code to read in the width to the appropriate location

	cout << endl << endl;

	// Fill in code to compute the area and store it in the appropriate
	// location
    box.area = box.sizes.length * box.sizes.width;

	// Fill in code to compute the perimeter and store it in the
	// appropriate location
    box. perimeter = (box.sizes.length + box.sizes.width ) *2;

	cout << fixed << showpoint << setprecision(2);

	cout << "The area of the rectangle is " << box.area << endl;

	cout << "The perimeter of the rectangle is " << box.perimeter
		 << endl;

	return 0;
}