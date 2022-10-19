#include <iostream>
#include "Temperature.h"


using namespace std;
//not completed yet, please test member functions which you define in Temperature class.
int main(){
    Temperature t(40,'K');
    Temperature t2;
    cout<<"Enter values for t2: ";
    cin>> t2;
    cout<<t2<<endl;;
    
    cout<<"t2-t is "<<t2-t<<endl;
    cout <<"T - t2 is"<<t-t2<<endl;
    cout<<"T degree "<<t.getDegree()<<endl;
    cout<<"T Scale "<<t.getScale()<<endl;
    cout<<"t2 degree "<<t2.getDegree()<<endl;
    cout<<"t2 Scale "<<t2.getScale()<<endl;
    if (t>t2)
    {
        cout<<"t>t2"<<endl;
    }
    if (t<t2)
    {
        cout<<"t<t2"<<endl;
    }
    if (t==t2)
    {
        cout<<"t==t2"<<endl;
    }
    


}