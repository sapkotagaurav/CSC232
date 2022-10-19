#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
#include <string>

using namespace std;
//Class to implement Temperature object
class Temperature
{
    private:
        double degree;//instance variable
        char scale;
    public:
		//Begin constructors
        Temperature();
        Temperature(double, char);
		//End constructors
		//Begin setters and getters
		double getDegree();
		char getScale();
		void setDegree(double t);
		void setScale(char c);
		//End setters and getters
		//Begin operator overloading
		double operator-(Temperature& rval);
		bool operator<(Temperature& rval);
		bool operator>(Temperature& rval);
		bool operator==(Temperature& rval);
		bool operator!=(Temperature& rval);
		friend ostream& operator<<(ostream& out, const Temperature& T);
		friend istream& operator>>(istream& in, Temperature& T);
		//End operator overloading
		//Begin helper functions
		double tempConverter(Temperature& T, char convertTo);
};
#endif