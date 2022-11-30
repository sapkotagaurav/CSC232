#include <iostream>

using namespace std;

int ackerman(int m, int n){
    if(m==0){
        return n+1;
    }
    if(n==0){
        return ackerman(m-1,1);
    }
    return ackerman(m-1,ackerman(m,n-1));
}

int main(){
    int m[] ={0,0,1,1,1,2,3};
    int n[]={0,1,1,2,3,2,2};
    for (int i = 0; i < 7; i++)
    {
        cout<<"A("<<m[i]<<", "<<n[i]<<") = "<<ackerman(m[i],n[i])<<endl;
    }
    

}