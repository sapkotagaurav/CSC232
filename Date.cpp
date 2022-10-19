#include<iostream>
#include<string>
#include "Date.h"

using namespace std;

Date::Date(){
    year = 2000;
    month =1;
    day =1;
}
Date::Date(int y, int m, int d){
    if(validateDate(m,d))
    {
        month=m;
        day=d;
        year=y;
    }else{
        throw std::invalid_argument("Invalid_Date");
    }
    
    
}
 int Date::operator-(Date& rval){
   
return ((year - rval.year) +float(month-rval.month)/12 + float(day-rval.day)/365)*365;//changing the months and days to year gives accurate days


 }

Date Date::operator++(){
    if (day ==31 && month==12)
    {
        year++;
        day=month=1;
    }
    
    else if(day == 28 && month==2 || day ==30 && days_in_months[month-1]==30  || day==31 && days_in_months[month-1]==31){
        month++;
        day=1;
    }else
    {
        day++;
    }

    return *this;
    
    
}
Date Date::operator++(int){
    const Date old(*this);
    ++(*this);
    return old;
    
}
Date Date::operator--(int){
const Date old(*this);
    --(*this);
    return old;
}
Date Date::operator--(){
    if (day==1 && month==1)
    {
        year--;
        day=days_in_months[11];
        month=12;
    }else if (day ==1)
    {
        month--;
        day = days_in_months[month-1];
    }else
    {
        day--;
    }
    
    
    return *this;
    
}
void Date::printDate(){ cout<<month<<"/"<<day<<"/"<<year<<endl;}
void Date::printDate2(){cout<<months[month-1]<<" "<<day<<","<<year<<endl;}
void Date::printDate3(){cout<<day<<" "<<months[month-1]<<" "<<year<<endl;}
    

 ostream& operator<<(ostream& out, const Date& d){
   cout<<d.months[d.month-1]<<" "<<d.day<<","<<d.year;       
   return out;     
}

istream& operator>>(istream& in,  Date& d){
    int day,mon;
    cin >> mon;
    cin >> day;
    if (d.validateDate(mon,day))
    {
        d.day=day;
        d.month=mon;
        cin >> d.year;
    }else{
        throw std::invalid_argument("Date error");
        
    }
    
    
    return in;
}

Date::~Date(){

}