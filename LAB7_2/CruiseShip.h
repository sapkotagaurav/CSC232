#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include<iostream>
#include "ship.h"


class CruiseShip:public Ship
{
private:
    int max_pass;
public:
    CruiseShip(string name,string year, int m){
        setName(name);
        setYear(year);
        max_pass =m;
    }
    CruiseShip(){

    }
    void setMaximum(int m){
        max_pass =m;
    }
    int getMaximum(){
return max_pass;
    }
    void print(){
        cout<<"Name:"<<getName()<<endl<<"Year:"<<getYear()<<endl<<"Maximum Passengers:"<<max_pass<<endl;
    }
    ~CruiseShip(){}
};

#endif