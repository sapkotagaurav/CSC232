#include<iostream>
#include "Date.h"

int main(){
    Date d1;// Default constructor sets date to 1/1/2000
    Date d2(2022,10,12);// Constructor takes parameters in Y,M,D
    cout<<d1<<endl<<d2<<endl<<endl;
    Date d3(2022,12,31);//December 31 to test increment capabilities
    cout<<d3<<"incremented by 1 is"<<++d3<<endl<<endl;//prints 
    cout<<"Now d3 is "<<d3<<endl<<"Lets dectrement by 1 "<<--d3<<endl<<endl;

    Date d4;
    cout<<"Enter a date  in the format of MM DD YYYY seperated by space, Invalid date will throw an error."<<endl;
    cin>>d4;

    cout<<"Lets print the entered date in all three formats"<<endl<<endl;
    d4.printDate();
    d4.printDate2();
    d4.printDate3();
    cout<<endl<<endl;


    cout<<d4++<<" after post incrementing is"<<d4<<endl;
    cout<<d4--<<" after post decrementing is"<<d4<<endl;

    Date d5,d6;

    cout<<"Enter two dates:(MM DD YYYY)";
    cin>>d5;
    cin>>d6;
    cout<<"first date - second date is "<<d5-d6<<" days"<<endl;


    
}