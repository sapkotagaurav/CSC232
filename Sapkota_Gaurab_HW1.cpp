#include<iostream>
#include<iomanip>

using namespace std;

struct Drink
{
    int id;
    string name;
    float cost;
    int total_num;
};

int displayMenu(Drink[]);


int main(){
    cout<<setprecision(2)<<fixed;
    float total_earning =0;
    string names[5]={"Cola","Root Beer","Lemon-Lime","Grape Soda","Cream Soda"};
    int cost[5] ={75,75,75,80,80};
    Drink drinks[5]={};
    for (int i = 0; i < 5; i++)
    {
        drinks[i].id =i+1;
        drinks[i].name = names[i];
        drinks[i].cost = cost[i]*0.01;
        drinks[i].total_num=20;
        
    }
    while (true)
    {
        float money =0;
        int choice = displayMenu(drinks);
    if(choice<=5 && choice>=0){
        if(choice ==0){
            cout<<"Total Earnings is $"<<total_earning<<endl;
            break;

        }else{
            cout<<"Enter the amount of Money:";
            cin>>money;
            if(money<0 || money>1){
                cout<<"Amount should be greater than 0 and less than 1"<<endl;
                continue;
            }else if(money<drinks[choice-1].cost){
                cout<<"You can not afford it "<<endl;
                continue;


            }else{
                if (drinks[choice-1].total_num==0)
                {
                    cout<<"The drink is sold out."<<endl;
                    continue;
                }
                
                drinks[choice-1].total_num--;
                cout<< "Your change is $"<< money - drinks[choice-1].cost<<endl;
                total_earning += drinks[choice-1].cost;
            }
            
        }

    }
    }
    
    



    

}
int displayMenu(Drink drinks[]){
    int choice =0;
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<drinks[i].id<<". "<< drinks[i].name<<" - $"<<drinks[i].cost<< " "<<drinks[i].total_num<<" left"<<endl;
    }
    cout<<"Enter an id for drink or 0 if you are done: ";
    cin>>choice;
    return choice;
    
    


}