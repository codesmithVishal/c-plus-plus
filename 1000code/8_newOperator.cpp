/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int *ptr1 = new int(20); // New is use for dynamic object.
    float *floatNum = new float(10.45);
    cout << "Integer is " << *ptr1 << " and flaot number is " << *floatNum << endl;
    int *ptr = new int[5];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    // delete []ptr;
    delete ptr1;
    delete floatNum;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }

    cout << "Integer is " << *ptr1 << " and float number is " << *floatNum << endl;

    return 0;
}