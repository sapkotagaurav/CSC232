#include <iostream>
#include <map>
#include <math.h>

using namespace std;
void menu();
float log(int);
double factorial(int);

int main()
{
    char op;
    int operand1;
    int operand2;
    while (true)
    {
        menu();
        cout << "Enter the operator" << endl;
        cin >> op;
        if (op == 'q')
            break;
        cout << "Enter the first operand" << endl;
        cin >> operand1;
        if (op != 'l' && op != '!')
        {
            cout << "Enter the second operand" << endl;
            cin >> operand2;
        }

        switch (op)
        {
        case '+':
            cout << operand1 + operand2 << endl;

            break;
        case '-':
            cout << operand1 - operand2 << endl;

            break;
        case '*':
            cout << operand1 * operand2 << endl;

            break;
        case '/':
            cout << operand1 / operand2 << endl;

            break;
        case 'l':
            cout << log(operand1) << endl;

            break;
        case '!':
            cout << factorial(operand1) << endl;

            break;

        default:
            cout<<"Invalid operator"<<endl;
            return 0;
            break;
            
        }
    }
}

void menu()
{
    cout << "Enter + for addition" << endl;
    cout << "Enter - for Subtraction" << endl;
    cout << "Enter * for Multiplication" << endl;
    cout << "Enter / for Division" << endl;
    cout << "Enter l for Logarithimic base 10" << endl;
    cout << "Enter ! for factorial" << endl;
    cout << "Enter q for quitting." << endl;
}

float log(int x)
{
    float l = log10(x);
    return l;
}

double factorial(int x)
{
    double fact = 1;
    while (x > 0)
    {
        fact = fact * x;
        x--;
    }
    return fact;
}
