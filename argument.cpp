/*Program definition: */

#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    int func(int z, int p)
    {
        a = z;
        b = p;
    }
    test sumvalue(test a1, test a2)
    {
        a = a1.a + a2.b;
        b = a1.b + a2.b;
    }
    void putdata()
    {
        cout << a << endl
             << b;
    }
};

int main()
{
    test obj1, obj2, obj3;
    obj1.func(5, 20);
    obj2.func(100, 10);
    obj3.sumvalue(obj1, obj2);
    obj1.putdata();
    cout << endl;
    obj2.putdata();
    cout << endl;
    obj3.putdata();
    return 0;
}