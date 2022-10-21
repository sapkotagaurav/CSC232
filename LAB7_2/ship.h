#ifndef SHIP_H
#define SHIP_H

#include<iostream>

using namespace std;
class Ship
{
private:
    string name;
    string year;

public:
    Ship(string n,string y){
        name=n;year=y;}
    Ship(){
        name="Undefined";
        year="undefined";
    }
    void setName(string a)
    {name=a;}
    void setYear(string y)
    {year = y;}
    string getYear()
    {return year;}
    string getName(){
        return name;
    }
    virtual void print(){
        cout<<name<<":"<<year<<endl;

    }
    ~Ship(){}
};



#endif 