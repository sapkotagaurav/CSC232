#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <iostream>
#include "ship.h"

class CargoShip:public Ship
{
private:
    int capacity;
public:
    CargoShip(string name, string year, int c){
        setName(name);
        setYear(year);
        capacity=c;
    }
    CargoShip(){

    }
    
    void setCapacity(int m){
        capacity =m;
    }
    int getCapacity(){
return capacity;
    }
     void print(){
        cout<<"Name:"<<getName()<<endl<<"Year:"<<getYear()<<endl<<"Capacity:"<<capacity<<endl;
    }
    ~CargoShip(){}
};





#endif