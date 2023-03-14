/*Program definition: */

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    int getvalue(int a)
    {

        this->a = a;
    }
    int setvalue()
    {
        cout << endl
             << a;
    }
};

int main()
{
    A a;
    a.getvalue(3);
    a.setvalue();
    return 0;
}