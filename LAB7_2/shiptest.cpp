#include <iostream>
#include "ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"

using namespace std;

int main(){
    Ship* s[3] ={new Ship("Titanic","2011"),new CargoShip("Nebula","2012",10),new CruiseShip("Hero","2000",5000)};
    
    for (size_t i = 0; i < 3; i++)
    {
        s[i]->print();
        cout<<endl;
    }
       
    

}