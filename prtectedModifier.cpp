/*Program definition: */

#include <iostream>
using namespace std;

class base
{
    int a;

protected:
    int b;

public:
    void showdata();
    int setdata();
};

int base::setdata()
{
    a = 12;
    b = 34;
}

void base ::showdata()
{
    cout<<"a= "<<a << "b= "<<b;
}
class derived : public base
{

    int c;

public:
    int proceesdata()
    {
        c = b + 100;
    }
    void display()
    {
        cout << b;
    }
};
int main()
{
    derived d;
    d.setdata();
    d.proceesdata();
    d.display();
    return 0;
}