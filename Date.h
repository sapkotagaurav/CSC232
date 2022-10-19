#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<iomanip>


using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;
    string months[12] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days_in_months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
public:
    Date(/* args */);
    Date(int,int,int);
    Date operator++();
     Date operator--();
     Date operator++(int);
     Date operator--(int);
     int operator-(Date& rval);
     void printDate();
     void printDate2();
     void printDate3();
    friend ostream& operator<<(ostream& out, const Date& d);
    friend istream& operator>>(istream& in,  Date& d);
    bool validateDate(int m,int d){
        return (m>=1 && m<=12 && d>=1 && d<=days_in_months[m-1]);
    }
    ~Date();
};







#endif
