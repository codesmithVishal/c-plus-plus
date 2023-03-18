/*Program definition: */

#include <iostream>
using namespace std;

int addition(int a, int b);
int substract(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
int modulo(int a, int b);
int main()
{

    cout << "A+B: " << addition(10, 43) << endl;
    cout << "A-B: " << substract(10, 43) << endl;
    cout << "A*B: " << multiplication(10, 43) << endl;
    cout << "A/B: " << division(04, 10) << endl;
    cout << "A%B: " << modulo(10, 3) << endl;

    return 0;
}

int addition(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
float division(int a, int b)
{
    return a / b;
}
int modulo(int a, int b)
{
    return a%b;
}