/*Program definition: */

#include <iostream>
using namespace std;
class base1
{
    int a;

public:
    int b;
    int setdata(int, int);
    int viewdata();
};

int base1::setdata(int value1, int value2)
{
    a = value1;
    b = value2;
}
int base1::viewdata()
{
    cout << "Value1 = " << a << endl
         << "Value2 = " << b << endl;
}

class base2
{
public:
};

int main()
{

    base1 obj1;
    obj1.setdata(5, 6);
    obj1.viewdata();

    return 0;
}