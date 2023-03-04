/*Program definition: */

#include <iostream>
using namespace std;
class func1
{
    int a, b;

public:
    int setvalue(int x, int y)
    {
        a = x;
        b = y;
    }
    void printline()
    {
        cout<<"-------"<<endl;
    }
    void printValue()
    {
        cout << a << " + " << b<<endl;
    }
    friend func1 sumcomplex(func1, func1);
};

func1 sumcomplex(func1 obj1, func1 obj2)
{
    func1 obj3;
    obj3.setvalue(obj1.a + obj2.a, obj1.b + obj2.b);
    return obj3; 
}
int main()
{
    func1 obj1, obj2;
    obj1.setvalue(10,11);
    obj2.setvalue(23,23);
    func1 sum = sumcomplex(obj1,obj2); 
    //cout<<sum;
    obj1.printValue();
    obj2.printValue();
    obj1.printline(); 
    sum.printValue();


    return 0;
}