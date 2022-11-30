#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool palindrome(string word, int i, int j)
{
    if (i >= j)
    {
        return true;
    }

    if (!isalnum(word[i]))
    {
        return palindrome(word, i + 1, j);
    }
    if (!isalnum(word[j - 1]))
    {
        return palindrome(word, i, j - 1);
    }
    if (toupper(word[i]) == toupper(word[j - 1]))
    {
        return palindrome(word, i + 1, j - 1);
    }

    return false;
}

int main()
{
    string a;
    while (true)
    {
        cout << "Enter a string:";
        getline(cin,a);
        if (a=="QUIT")
            break;
        if(palindrome(a, 0, a.length())) 
         cout<<"This is palindrome."<<endl<<endl ;
         else
          cout<<"Not a palindrome"<<endl<<endl;
    }
}