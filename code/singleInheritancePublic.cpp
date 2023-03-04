/* Program definition: */

#include <iostream>
using namespace std;
class base
{
    int a;

public:
    int b;
    int setvalue();
    int retunA();
    int printValue();
};

class derived : public base
{
    int c;

public:
    int setc();
    int mul();
};
int base::setvalue()
{
    a = 10;
    b = 50;
}

int base::retunA()
{
    return a; //  This how you can pass
}

int base::printValue()
{
    cout << "Base class value A = " << a
         << endl
         << " Base Class B is = " << b << endl;
}

int derived::setc()
{
    c = b - retunA(); // here We can aceess Public data member b but not a;
}

int derived::mul()
{

    return retunA() * b * c; // We can call member function by their name;
}
int main()
{
    derived object1;
    object1.setvalue();
    object1.printValue();
    object1.setc();
    cout << object1.mul(); // cout << object1.retunA();
                           // cout<<object1.a; //This is inaccesible
    return 0;
}
