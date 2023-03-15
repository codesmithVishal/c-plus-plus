/*Program definition: */

#include <iostream>
using namespace std;

void mul(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int a = 10;
    // int & b  = a;
    int b = 20;

    cout << a << " " << b << endl;
    // cout<<b<<endl; address of variable.
    mul(a, b);
    cout << a << " " << b << endl;

    return 0;
}