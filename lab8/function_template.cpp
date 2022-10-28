#include <iostream>
using namespace std;

template <typename T>
T absolute(T num1) {
    if (num1<0)
    {
        return num1*-1;
    }
    return num1;
    
}

int main() {
    int result1;
    double result2;
    result1 = absolute<int>(2);
    cout << "absolute of 2 :" << result1 << endl;

    result2 = absolute<double>(-2.2);
    cout << "absolute of -2.2 :" << result2 << endl;

    return 0;
}