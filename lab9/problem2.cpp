#include <set>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include<algorithm>
#include <vector>
#include <ranges>
#include <stdlib.h>
#include <unordered_set>


using namespace std;

bool compare(pair<string, int>& n,pair<string, int>& m)
    {
      return n.second < m.second;
    }
 void sort(map<string, int>& M)
   {

    // Declare vector of pairs
   vector<pair<string, int> > Ans;

    // Copy key-value pair from Map
   // to vector of pairs
      for (auto& i : M) 
      {
       Ans.push_back(i);
      }

   // Sort using function
   sort(Ans.begin(), Ans.end(), compare);
   
reverse(Ans.begin(),Ans.end());
   // Print the sorted value
     for (auto& i : Ans) {

        cout << i.first << ':'
          << i.second << endl;
         }
   }

map<string,int> SplitStr(string str)
{
    string s = "";
    map <string, int> a;
    for (auto x : str)
    {
        if (x == ' ')
        {
            if (s !=" ")
            {
               if (a.count(s))
            {
                a[s]++;
            }else{
                a[s] =1;
            }
            }
            
            
            s = "";
        }
        else {
            s = s + x;
        }
    }
    a.erase("");
    
    
    return a;
}

int main(){


    string a ;
    cout<<"Enter a sentence"<<endl;
    getline(cin,a);
    string b="";
    set<char> x;
        unordered_set<char> s;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (!isalnum(a[i]))
        {
            x.insert(a[i]);
            s.insert(a[i]);
        

        }
        if (isalnum(a[i]) || isspace(a[i]))
        {
            b=b+a[i];
        

        }
        
    }



for (auto v : x)
{
    cout<<v<<" ";
}
cout<<endl;
for (auto v : s)
{
    cout<<v<<" ";
}
cout<<endl<<endl;


map<string,int> g = SplitStr(b);
sort(g);


    
    


}