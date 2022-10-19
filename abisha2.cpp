#include <iostream>

using namespace std;

int main(){

    cout<<"Enter a sentence (end by '.','?' or '!':):"<<endl;
    char c;
    
    int space =0;
    int tab =0;
    int newline =0;
    int count =0;
    while (cin.get(c))
    {
        if (c  =='?' ||c  =='.'||c  =='!')
        {
            break;
        }
        if (isspace(c ))
        {
            switch (c )
            {
            case '\t':
                {tab++;}
                break;
            case '\n':{
                newline++;
            }break;
            
            default:
            space++;
                break;
            }
            
            

            
        }
        
    
        count++;
    }
    cout<<"Number of space characters:"<<space<<"\nNum of Tab character:"<<tab<<"\nNum of newline character:"<<newline<<endl;
    
}