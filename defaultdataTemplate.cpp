/*Program definition: */

#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float>
class vishal
{
    t1 a;
    t2 b;

public:
    vishal(t1 x, t2 y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The Value of A is: " << a << endl;
        cout << "The value of B is: " << b << endl;
    }
};

int main()
{
    vishal<> Obj(113, 3.34);
    Obj.display();
    cout << endl;
    vishal<float, int> obj2(2.5, 9);
    obj2.display();
    cout << endl;
    vishal<> obj3(9.5, 1); //   print  integer as output  because defaut argument int. 
    obj3.display();
    return 0;
}