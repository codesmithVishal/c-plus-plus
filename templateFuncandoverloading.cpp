/*Program definition: */

#include <iostream>
using namespace std;
template <class T>
class vishal
{
public:
    T a;
    int func1(T x)
    {
        a = x;
    }
    void display();
};

template <class T>
void vishal<T>::display()
{
    cout << a << endl;
}

int main()
{
    vishal<int> obj;
    obj.func1(10);
    obj.display();
    return 0;
}