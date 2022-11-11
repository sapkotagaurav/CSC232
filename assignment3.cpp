#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> populate(int x)
{
    vector<int> a;
    for (int i = 2; i <= x; i++)
    {
        a.push_back(i);
    }
    return a;
}
void display(int num)
{
    if (isPrime(num))
    {
        cout << num << " ";
    }
}

int main()
{
    int upper_limit;
    cout << "Enter upper limit: ";
    cin >> upper_limit;
    vector<int> x = populate(upper_limit);
    cout << "Prime numbers between 1 and " << upper_limit << " are:";
    std::for_each(x.begin(), x.end(),
                  display);
}