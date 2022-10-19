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
	rectangle box ={20,30,600} ;
    cout<<box.perimeter<<endl;

    int x =200;
int *(a) = &x;

cout<<a;



}