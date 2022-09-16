#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double num = 361;
    double guess = num;
    double new_guess=1;
    double old_guess=1;
    while (abs(new_guess*new_guess-num) >1e-5)
    {
                cout<<fixed<<setprecision(5)<<new_guess<<endl;

        new_guess = (old_guess + num/old_guess)/2;
        old_guess = new_guess;
        
        
        
    }
    cout<<fixed<<setprecision(5)<<new_guess<<endl;
    
}