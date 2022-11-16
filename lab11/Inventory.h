#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
using namespace std;

class Inventory
{
private:
    int serialNum;
    string manufactDate;
    int lotNum;
public:
    Inventory(/* args */){}
    Inventory(int a, string b, int c){
        serialNum=a;
        manufactDate=b;
        lotNum=c;
    }
    void setSerial(int x) {
        serialNum =x;
    }
    int getSerial(){
        return serialNum;
    }

    void setLot(int x){ lotNum=x;}
    int getLot(){return lotNum;}
    void setDate(string x){ manufactDate =x;}
    string getDate(){return manufactDate;}
    friend ostream& operator<<(ostream& os, const Inventory& i);
    ~Inventory(){}
};

 ostream& operator<<(ostream& os, const Inventory& i){
        cout<<"Serial No: "<<i.serialNum;
        return os;

    }


#endif