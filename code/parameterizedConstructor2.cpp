/*Program definition: write a program to understand parameterized constructor */

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    void printdata()
    {
        cout << a << endl
             << b << endl;
    }
}; // Must end with  semicolon

complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex a(1, 2);

    complex b = complex(2, 3);
    a.printdata();
    b.printdata();

    return 0;
}